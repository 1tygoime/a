/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast
    int t;
    for(cin >> t; t--; ){
        string s;
        cin >> s;
        cout << s[0];
        for(int i = 1; i < s.length(); i+= 2)
            cout << s[i];
        cout << '\n';
    }
    return 0;
}

