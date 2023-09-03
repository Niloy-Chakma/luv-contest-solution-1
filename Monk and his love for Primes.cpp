#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    string str;
    int i,j,num=0;
    cin >>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]<='Z' && str[i]>='A')
        {
            num-=(str[i]+32);
        }
        else{
            num+=(str[i]-32);
        }
    }
    num=abs(num);
    a[1]=1;
    if(num%2==0 && num!=2)
    {
        cout<<0;
        return 0;
    }
    else{
        for(i=3;i<=sqrt(1000000);i++)
        {
            for(j=3;j<=sqrt(1000000);j++)
            {
                a[i*j]=1;
            }
        }
    }
    if(a[num]==0){
        cout << 1;
    }
    else{
        cout<<0;
    }

}
