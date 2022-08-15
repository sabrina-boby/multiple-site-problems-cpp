#include<bits/stdc++.h>
using namespace std;
#define max 1000000
vector<bool>prime(max,1);
vector<long long int>prime2;
void sieve()
{
    long long int i,j,count=1;
    prime[0]=false;
    for(i=2; i<=max; i++)
    {
        if(prime[i])
        {
            for(j=i*2; j<=max; j+=i)
            {
                prime[j]=0;
            }
        }
    }

    for(i=1; i<=max; i++)
    {
        if(prime[i]==1)
        {
            prime2.push_back(i);
        }
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;

    while(t--)
    {
        long long int i,l,n,p,q,flag=1;
        cin>>n;
        l=prime2.size();
        for(i=1; i<l; i++)
        {
            if(prime2[i]-1>=n && flag==1)
            {
                p=prime2[i];
                flag=0;
            }
            else if(prime2[i]-p>=n)
            {
                q=prime2[i];
                break;
            }
        }
        cout<<p*q<<endl;
    }
}




