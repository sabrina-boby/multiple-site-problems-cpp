#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f1,f2,x,temp;
        cin>>f1>>f2;
        if(f1>f2)
        {
            temp=f1;
            f1=f2;
            f2=temp;
        }
        if(f1<f2)
        {
            x=f1;
            while(x)
            {
                if(f1%x==0 && f2%x==0)
                {
                    cout<<x<<endl;
                    break;
                }
                --x;
            }
        }
    }
}
