#include <bits/stdc++.h>
using namespace std;
#define MAX 505
long long a[MAX][MAX],ma=LLONG_MIN;
int n,m,k;

int main(){
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    for (int i = k; i <= n; i++){
        for (int j = k; j <= m; j++){
                ma=max(ma,a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k]);
        }
    }
    cout << ma;
    return 0;
}
