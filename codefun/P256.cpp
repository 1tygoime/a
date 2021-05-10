#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    string str;
    cin >> str >> n;
    for (long long i = 1; i <= n; i ++){
        long long x;
        char c;
        cin >> x >> c;
        if (str[x-1] == c) cout << 1;
        else cout << 0;
    }
    return 0;
}