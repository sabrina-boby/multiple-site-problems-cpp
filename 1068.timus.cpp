#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long int sum=0;
    cin>>n;
    if(n<=0)
    {
        for(i=1; i>=n; i--)
        {
            sum=sum+i;
        }
    }
    else if(n>0)
    {
        for(i=1; i<=n; i++)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}
