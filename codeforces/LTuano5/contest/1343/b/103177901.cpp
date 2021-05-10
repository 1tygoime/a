#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second

void sol(){
    int n, sum = 0, s = 0;
    cin >> n;
    if (n % 4){
        cout << "NO\n";
        return;
    }
    n /= 2;
    cout << "YES\n";
    for(int i = 1; i <= n; i++){
        cout << i * 2 << ' ' ;
        sum += (i * 2);
    }
    for(int i = 1; i < n; i ++){
        cout << 2 * i - 1 << ' ';
        s += (2 * i - 1);
    }
    cout << sum - s << '\n';
}

int main(){
    fast;
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
