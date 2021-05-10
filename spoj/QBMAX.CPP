#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[105][105];
int f[105][105];

int main() {
    cin >> m >> n;
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j) cin >> a[i][j];

    memset(f, 0, sizeof f);
    for(int i = 1; i <= m; ++i) f[i][1] = a[i][1];
    for(int j = 2; j <= n; ++j)
        for(int i = 1; i <= m; ++i) {
            f[i][j] = f[i][j-1] + a[i][j];
            if (i > 1) f[i][j] = max(f[i][j], f[i-1][j-1] + a[i][j]);
            if (i < m) f[i][j] = max(f[i][j], f[i+1][j-1] + a[i][j]);
        }
    int ans = INT_MIN;
    for(int i = 1; i <= m; ++i) ans = max(ans, f[i][n]);
    cout << ans << '\n';
    return 0;
}
