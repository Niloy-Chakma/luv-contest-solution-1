#include <bits/stdc++.h>
using namespace std;
int s[1000005];
int main()
{
    int i,j,t,a,b,c,lim,loop_count=0;
    cin >>a>>b>>c;
    for(i=1;i<=c;i++){
        s[i*a]=1;
        s[i*b]=1;

    }
    if(a*(i-1)>b*(i-1))lim =a*(i-1);
    else lim=b*(i-1);
    for(i=1;i<=lim;i++){
        if(s[i]==1)loop_count++;
        if(loop_count==c)break;
    }
    int num=i,gcd,step,temp_a=a,temp_b=b;
    if(num%a==0 && num%b==0){
        while(temp_b!=0){
            int t=temp_b;
            temp_b=temp_a%temp_b;
            temp_a=t;
        }
        gcd=temp_a;
        step=(a*b)/gcd;
    }
    else if(num%a==0){
        step=a;
    }
    else{
        step=b;
    }
    while(num>=0){
        cout<<num<<" ";
        num=num-step;
    }
}
