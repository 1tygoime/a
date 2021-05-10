#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const string filename = "ABC";
const int nmax=35;
pair <int,int> a[nmax];
int n,cnt;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cnt += (a[i].first==a[j].second);
    }
    cout<<cnt;
	return 0;
}
