#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    if (str1 == str2) cout << 1;
    else{
        string str3,str4;
        long long length = str1.length();
        for(long long i = 1; i <= length; i++){
            str3 += toupper(str1[i]);
            str4 += toupper(str2[i]);
        }
        if (str3 == str4) cout << 2;
        else cout << 3;
    }
    return 0;
}