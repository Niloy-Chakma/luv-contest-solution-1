#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    while(t--)
    {
        long long num=1;
        cin >> n;
        for(i=0;i<n;i++){
            long long temp;
            cin >> temp;

            num =num*temp;
        }
        int last_dig;
        last_dig = num%10;
        if(last_dig==3 || last_dig==5 || last_dig==2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
}
