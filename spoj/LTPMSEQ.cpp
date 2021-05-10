/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
string s;
unordered_set <string> ok;

int main(){
    fast
    for (cin >> n; n--; ){
        cin >> s;
        if(ok.count(s))
            ok.erase(s);
        else
            ok.insert(s);
    }
    if (ok.size()) cout << *ok.begin();
    else cout << -1;
    return 0;
}
