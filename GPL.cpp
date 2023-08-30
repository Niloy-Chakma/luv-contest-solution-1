#include<bits/stdc++.h>
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
            //I used long long in pow cause when number is bigger double data type decrease its accuracy.
            // as pow return double data type so I type casted it to long long so that it does not affect its accuracy.
        }
        cout << sum<<endl;
    }

}
