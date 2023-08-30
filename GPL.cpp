#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        cin >> n;
        int temp_n=n;
        cin>>s;
        while(n--){
            sum+=(s[temp_n-1-n]-'0')*(long long)pow((double)2,(double)n)*1LL;
        }
        cout << sum<<endl;
    }

}
