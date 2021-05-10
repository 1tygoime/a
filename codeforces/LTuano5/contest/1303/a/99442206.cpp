/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
string s;

void sol(){
    cin >> s;
    int res = 0;
    int l = s.find('1'), r = s.rfind('1');
    if (l < 0 || l == r){
        cout << 0;
        return;
    }
    for(;l<=r;l++)
        res += (s[l] == '0');
    cout << res;
}

int main(){
    fast
    for (cin >> t; t--; ){
        sol();
        cout << (t > 0 ? "\n" : "");
    }
    return 0;
}
