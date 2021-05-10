#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void sol(){
    int n, a[2];
    a[0] = a[1] = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x % 2]++;
    }
    if((a[0] == 0 && a[1] == n) || (a[0] == n || a[1] == 0))
        cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
