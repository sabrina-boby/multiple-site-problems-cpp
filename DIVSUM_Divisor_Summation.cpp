#include<bits/stdc++.h>
using namespace std;
#define max 500005
vector<int>a(max,0);
void sieve()
{
    int i,j;
    for(i=1; i<=max; i++)
    {
        int sum=0;
        for(j=i*2; j<=max; j+=i)
        {
            sum=a[j]+i;
            a[j]=sum;
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
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}





















