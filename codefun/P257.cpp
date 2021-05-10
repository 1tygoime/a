#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    long long length = str.length() - 1;
    for (long long i = 0; i <= length; i++){
        if(islower(str[i])) cout << 1;
        if(isupper(str[i])) cout << 0;
    }
    return 0;
}