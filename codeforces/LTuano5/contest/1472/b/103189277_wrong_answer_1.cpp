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
        int n, cnt1(0), cnt2(0);
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x == 1) cnt1++;
            else cnt2++;
        }
        if (cnt1 % 2 || cnt2 % 2) cout << "NO\n";
        else cout << "YES\n";
//        if (cnt1 % 2 == cnt2 % 2) cout << "YES\n";
//        else cout << "NO\n";
    }
}
