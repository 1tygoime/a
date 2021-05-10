
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second
#define nmax 100005
#define out(v) for (const auto &c: (v)) cout << c << ' '; cout << '\n';

void sol(){
    int cnt[nmax], n, d = 0, x, y;
    string s;
    cin >> s;
    for(int i = 1; i < SZ(s); i++){
        if (s[i] == s[i - 1])
            d++;
        cnt[i] = d;
    }
    for(cin >> n; n--; ){
        cin >> x >> y;
        cout << cnt[--y] - cnt[--x] << '\n';
    }
}

int main(){
    fast;
    int t;
    for (t = 1; t--; ){
        sol();
    }
    return 0;
}
