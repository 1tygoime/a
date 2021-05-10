/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//const string filename = "COUNTST";
const int nmax=105;
//const ll mod = 1e9+7;
int n,res,a[5],x;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> n; n--; ){
        cin >> x;
        // du? 1 nhom taxi
        if(x==4)
            res++;
        else a[x]++;
    }
    // so nhom 1 nguoi ghep vao nhom 3 nguoi de du 1 taxi
    a[1]-=a[3]; res +=a[3];
    // nhom 2 nguoi chap vao
    res += a[2]/2;
    // so nhom 2 nguoi du ra
    if(a[2]%2){
        res++;
        a[1]-=2;
    }
    // nhom 1 nguoi du
    res += (a[1] > 0 ? (a[1]+3)/4 : 0);
    cout << res;
}
