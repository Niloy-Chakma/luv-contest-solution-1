#include<bits/stdc++.h>
using namespace std;
long long p[41][1000];
int main()
{
    int i,j,t,n;
    p[1][0]=1;
    for(i=2;i<=40;i++)
    {
        for(j=0;j<i;j++)
        {
           if(j==i-1||j==0)
           {
               p[i][j]=1;
           }
           else
           {
               p[i][j]=p[i-1][j-1]+p[i-1][j];
           }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
