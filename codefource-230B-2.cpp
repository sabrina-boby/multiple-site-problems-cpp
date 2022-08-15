#include<bits/stdc++.h>
using namespace std;
#define max 10000000
vector<bool>prime(max,1);
int sieve()
{
    long long int i,j,m=sqrt(max+1);
    prime[0]=prime[1]=0;

    for(i=2; i<=max; i++)
    {
        if(prime[i])
        {
            for(j=i*2; j<=max; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    sieve();
    long long int t;
    cin>>t;
    while(t--)
    {
        double n,m;
        int o;
        cin>>n;
        m=sqrt(n);
        o=floor(m);

        if(prime[m]==0 || m!=o)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
