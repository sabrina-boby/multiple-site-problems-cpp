#include<iostream>>
using namespace std;
int main()
{
    int a[5][5] = {{1,4,5,16,17},{2,3,6,15,18},{9,8,7,14,19},{10,11,12,13,20},{25,24,23,22,21}};
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,k=1;
        cin>>n;

        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(n==a[i][j])
                {
                    cout<<"Case "<<k++<<": "<<j+1<<" "<<i+1<<endl;
                    break;
                }
            }
        }
    }
}
