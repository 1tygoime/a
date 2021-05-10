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
const int nmax = 1e3+5;
int t,a[nmax],b[nmax],n,m;
bool check;
int main() {
    fast
    for (cin >> t; t--; ){
        cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        check=false;
        for(int i = 0; i < n && !check; i++){
            for(int j = 0; j < m && !check; j++){
                if(a[i]==b[j]){
                    cout << "YES\n1 " << a[i] << '\n';
                    check=true;
                    break;
                }
            }
        }
        if(!check) cout << "NO\n";
    }
    return 0;
}