#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    string str;
    cin >> str >> i >> j;
    long long length = str.length();
    for (long long k = 0; k < length; k++){
        if (k >= i-1 && k <= j-1){
            if (islower(str[k])) putchar((char)(toupper(str[k])));
            if (isupper(str[k])) putchar((char)(tolower(str[k])));
        }
        else putchar(str[k]);
    }
    return 0;
}