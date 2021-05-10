#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    long long length = str.length() - 1;
    for (long long i = 0; i <= length; i++){
        if (isdigit(str[i])) cout << "";
        else cout << str[i];
    }
    return 0;
}