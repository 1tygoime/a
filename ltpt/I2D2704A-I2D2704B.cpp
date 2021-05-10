#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long m,n,q;
    cin >> m >> n >> q;
    long long a[m+1][n+1];
    for (long long i = 0; i <= n; i++)
        a[0][i]=0;
    for (long long i = 1; i <= m; i++)
        a[i][0] = 0;
    for (long long i = 1; i <= m; i++){
        for (long long j = 1; j <= n; j++){
            cin >> a[i][j];
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    while (q--){
        long long x,y;
        cin >> x >> y;
        cout << a[x][y] << '\n';
//2704B
//        long long u,v,x,y;
//        cin >> u >> v >> x >> y;
//        cout << a[x][y]-a[u-1][y]-a[x][v-1]+a[u-1][v-1] << '\n';
    }
    return 0;
}
