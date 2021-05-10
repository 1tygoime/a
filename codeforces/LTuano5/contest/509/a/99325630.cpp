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
int n, a[15][15];
int main() {
    fast
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i][1]=a[1][i]=1;
        for(int j = 2; j <= n; j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout << a[n][n];
    return 0;
}
