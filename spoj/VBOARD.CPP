#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int a[505][505], n, q, wh[505][505], bl[505][505];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            bl[i][j] = bl[i - 1][j] + bl[i][j - 1] - bl[i - 1][j - 1];
            wh[i][j] = wh[i - 1][j] + wh[i][j - 1] - wh[i - 1][j - 1];
            if ((i + j) % 2) bl[i][j] += a[i][j];
            else wh[i][j] += a[i][j];
        }
    }
    int q;
    for(cin >> q; q--; ){
        int x, y, u, v;
        cin >> x >> y >> u >> v;
        int tr = wh[u][v] - wh[x-1][v] - wh[u][y-1] + wh[x-1][y-1];
        int d = bl[u][v] - bl[x-1][v] - bl[u][y-1] + bl[x-1][y-1];
        cout << abs(tr - d) << '\n';
    }
}
