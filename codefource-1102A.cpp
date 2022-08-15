#include<iostream>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    if(n%2==0)
    {
        m=n/2;
        if(m%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else
    {
        m=n/2;
        if(m%2==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}

