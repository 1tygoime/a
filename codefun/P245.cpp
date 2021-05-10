#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    long long length = str.length();
    for (long long i = 0; i<= length-1; i++){
        putchar(tolower(str[i]));
    }
    return 0;
}