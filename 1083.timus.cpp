#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,mul=1;
    string x;
    cin>>n>>x;
    m=count(x.begin(), x.end(), '!');

    for(i=n; i>0; i-=m)
    {
        mul=mul*i;
    }
    cout<<mul<<endl;
}
