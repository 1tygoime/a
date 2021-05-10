#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void sol(){
    int n, mi = INT_MAX, cnt = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x < mi) mi = x, cnt = 1;
        else if (mi == x) cnt++;
    }
    cout << n - cnt << '\n';
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
