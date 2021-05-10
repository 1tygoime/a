#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()
//#define OPENFILE
#define filename "644A"

void sol(){
    int a, b;
    cin >> a >> b;
    int res = min (max (2 * a, b), max (a, 2 * b));
    cout << res * res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifdef OPENFILE
    freopen(filename".inp", "r", stdin);
    freopen(filename".out", "w", stdout);
    #endif // OPENFILE

    int t;
    for(cin >> t; t--; )
        sol();

    return 0;
}
