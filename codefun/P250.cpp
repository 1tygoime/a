#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    long long i,j;
    cin >> i >> j;
    str.erase(i-1, j-i+1);
    cout << str;
    return 0;
}