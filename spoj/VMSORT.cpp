/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,k;
unordered_set <string> s;
string s1;
int main() {

    fast
    for(cin >> k; k--; ){
        for(cin >> n; n--; ){
            cin >> s1;
            s.insert(s1);
        }
    }
    cout<<s.size();
    return 0;
}
