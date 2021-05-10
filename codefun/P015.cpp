#include <bits/stdc++.h>
using namespace std;

int main(){
    string str,str1;
    cin >> str;
    long long length = str.length();
    for (long long i = length-1; i >= 0; i--)
    str1 += str[i];
    cout << str << str1;
    return 0;
}