#include<iostream>
#include <vector>
using namespace std;
vector<string>vec;
int main()
{
    unsigned long t;
    cin>>t;
    while(t--)
    {
        unsigned long i=0,n=1,m,flag=0;
        cin>>m;

        while(n<=m)
        {
            n=n+i;
            i++;
            if(n==m)
            {
                vec.push_back("1 ");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            vec.push_back("0 ");
        }
    }
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout<<*it;
}
