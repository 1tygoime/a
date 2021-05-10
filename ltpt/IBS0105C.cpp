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
#define nmax 505
#define FORU(i,a,b) for(int i = (a); i <= (b); i++)

int n, q;
vector <ll> L, R;
ll a[505],b[505],c[505],d[505], k;

int main(){
    fast;
    cin >> n >> q;
    FORU(i,1,n) cin >> a[i];
    FORU(i,1,n) cin >> b[i];
    FORU(i,1,n) cin >> c[i];
    FORU(i,1,n) cin >> d[i];
    FORU(i,1,n)
        FORU(j,1,n)
            L.pb(a[i] + b[j]);
    FORU(i,1,n)
        FORU(j,1,n)
            R.pb(c[i] + d[j]);
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    while(q--){
        cin >> k;
        int res = 0;
        FORU(i, 1, SZ(L)){
            int u = 1, v = SZ(L);
            while (u <= v){
                int M = (u + v) / 2;
                if (R[M] + L[i] == k){
                    res = M;
                    break;
                } else if (R[M] + L[i] < k)
                    u = M + 1;
                else
                    v = M - 1;
            }
        }
        cout << (bool)res << '\n';
    }
    return 0;
}
