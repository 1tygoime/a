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
    int n;
    cin >> n;
    if (n == 1) cout << 9;
    else if (n == 2) cout << "98";
    else if (n == 3) cout << "989";
    else{
        cout << "989";
        n -= 3;
        for(int i = 0; i < n; i++)
            cout << i;
    }
    cout << '\n';
}

int main(){
    fast;
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
