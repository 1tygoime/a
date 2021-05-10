// RUT CT tu (a1 + a2 + .. + an)^2 => 2aiaj (i = 1 -> n ; j = i + 1 -> n) == ....

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

int main(){
    int n;
    ll S(0), S1(0), x;
    for(cin >> n; n--; ){
        cin >> x;
        S += x;
        S1 += x * x;
    }
    cout << (S * S - S1) / 2;
    return 0;
}
