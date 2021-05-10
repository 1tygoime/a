#include <bits/stdc++.h>
using namespace std;
// luu y dung C++11
int sumd(string str){
    int tong(0);
    for (int i = 0 ; i < str.length(); i++){
        if (str[i] == '1') tong += 1;
        if (str[i] == '2') tong += 2;
        if (str[i] == '3') tong += 3;
        if (str[i] == '4') tong += 4;
        if (str[i] == '5') tong += 5;
        if (str[i] == '6') tong += 6;
        if (str[i] == '7') tong += 7;
        if (str[i] == '8') tong += 8;
        if (str[i] == '9') tong += 9;
    }
    return tong;
}

char maxd(string str){
    char ma;
    for (long long i = 0; i < str.length(); i++)
        if (str[i] > ma) ma = str[i];
    return ma;
}

bool prime(long long n){
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n%i==0)
            return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int d = sumd(s);
        char m = maxd(s);
        string t = to_string(d);
        t += m;
        long long tm = stoi(t);
        if (prime(tm))
            cout << "YES \n";
        else
            cout << "NO \n";
    }
    return 0;
}
