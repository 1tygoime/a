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


//map <int, pii> mp;

void sol(){
//    cnt.clear();
//    lct.clear();
    vi cnt(200005), lct(200005);
//    fill(cnt.begin(), cnt.end(), 0);
//    fill(lct.begin(), lct.end(), 0);
    int n, x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        cnt[x]++;
        lct[x] = i;
    }
    for(int i = 0; i <= n; i++){
        if (cnt[i] == 1){
            cout << lct[i] << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    fast;
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
