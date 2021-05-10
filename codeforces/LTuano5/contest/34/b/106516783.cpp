#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int n, m, res;
vector <int> v;

void copycode(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < m; i++){
        if (v[i] < 0) res += abs(v[i]);
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    copycode();

    return 0;
}
