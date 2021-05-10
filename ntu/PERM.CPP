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
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int v[30];

int main(){
    int n, cnt(1);
    cin >> n;
    for(int i = 1; i <= n; i++){
        v[i] = i;
        cnt *= i;
    }
    cout << cnt << '\n';
    do{
        for(int i = 1; i <= n; i++)
            cout << v[i];
        cout << '\n';
    } while (next_permutation(v+1,v+n+1));
    return 0;
}
    