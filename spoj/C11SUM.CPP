#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

// N=5312
// Xet cac day con 5 | 3 53 | 1 31 531 | 2 12 312 5312
// Goi s[i] la tong cac day con ket thuc = N[i]
// Res =s[0]+s[1]+s[2]+s[3]
// s[2]=1+31+531=563
// s[3]=2+12+312+5312 = 2+10+2+310+2+5310+2= s[2]*10+(3+1)*2
// s[i]=(i+1)*N[i]+10*s[i]

int main(){
    string s;
    ll x = 0, res = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        x = (x * 10 + (s[i] - '0') * (i + 1)) % mod;
        res = (res % mod + x % mod) % mod;
    }
    cout<<res;
    return 0;
}
