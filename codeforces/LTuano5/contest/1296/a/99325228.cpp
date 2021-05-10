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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t,n,odd,even;
int main() {
    fast
    for(cin >> t; t--; ){
        odd=0;even=0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            odd+=(x%2);
            even+=(x%2==0);
        }
        if(!even)
            cout << (n%2?"YES\n":"NO\n");
        else if(!odd) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}