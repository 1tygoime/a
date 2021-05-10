#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t(0), s(0);
    string str;
    getline(cin,str);
    long long length = str.length()-1;
    for (long long i = 0; i <= length; i++){
        if(str[i] == 't' || str[i] == 'T') t++;
        if(str[i] == 's' || str[i] == 'S') s++;
    }
    if(s>=t) cout << "France";
    else cout << "English";
    return 0;
}