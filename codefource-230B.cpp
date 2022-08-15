#include<bits/stdc++.h>
using namespace std;
#define max 10000000
vector<bool>prime(max,1);
vector<long long int>hp(max,0);
int sieve()
{
    long long int i,j,m=sqrt(max+1);
    prime[0]=prime[1]=0;

    for(i=2; i<=m; i++)
    {
        if(prime[i])
        {
            hp[i]=i;
            for(j=i*i; j<=max; j+=i)
            {
                hp[j]=i;
                prime[j]=false;
            }
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
        long long int n,i,count;
        cin>>n;
        if(prime[n]==1)
        {
            count=1;
        }
        else
        {
            count=2;
        }

        while(n>1)
        {
            long long int fector=hp[n];
            if(n%hp[n]==0)
            {
                n=n/hp[n];
                if(fector!=n)
                {
                    count++;
                    if(count>3)
                    {
                        break;
                    }
                }
            }
        }
        if(count==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}











