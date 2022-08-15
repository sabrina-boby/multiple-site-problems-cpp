#include<iostream>
#include <cstring>
#include<cmath>
using namespace std;
#define max 164000

bool prime[max];
int ans[15000],increment=1;

int sieve()
{
    int i,j;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;

    ans[0]=2;
    increment=1;

    for(i=3; i<max && increment<15000; i+=2)
    {
        if(prime[i])
        {
            ans[increment++]=i;
            if(i<=sqrt(max))
            {
                for(j=i*i; j<max; j+=i)
                {
                    prime[j]=false;
                }
            }
        }
    }
}

int main()
{
    int t,n;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
}







