#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    getline(cin,str1);
    for(int i=0;i<str1.size();i++){
        if(str1[i]==' '){
            printf("\n");
            continue;
        }
        cout<<(char)(str1[i] -32);
    }
    return 0;
}
