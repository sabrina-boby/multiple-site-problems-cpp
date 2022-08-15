#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,count=0;
        int a[105];
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<k; i++)
        {
            if(a[i]>k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
