/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;
void prod(){
    int cnt(0);
    string s, base, res("");
    cin >> s;
    for (char &c : s)
        cnt += (c != '0');
    for (int i = s.size() - 1; i >= 0; i--, base += '0')
        if (s[i] != '0') { res.push_back(s[i]); res += base; res.push_back(' '); }
    cout << cnt << '\n' << res << (t > 0 ? "\n" : "");
}

int main(){
    fast
    for (cin >> t; t--; ){
        prod();
    }
    return 0;
}
