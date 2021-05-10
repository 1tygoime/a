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

int main(){
    fast;
    int t;
    for(cin >> t; t--;){
        int w, h, n;
        cin >> w >> h >> n;
        if (n == 1) cout << "YES\n";
        else{
            int t = w * h, res = 1;
            while (t % 2 == 0){
                t /= 2;
                res *= 2;
            }
            if (res >= n) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
