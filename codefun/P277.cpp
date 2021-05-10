#include <bits/stdc++.h>
using namespace std;
int a[105][105],n,m,dong0(0),cot0(0);
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    // duyet dong toan 0
    for (int i = 0; i < n; i++){
        int cnt(0);
        for (int j = 0; j < m; j++){
            if (a[i][j]==0)
                cnt++;
        }
        if(cnt==m)
            dong0++;
    }
    // duyet cot toan 0;
    for (int i = 0; i < m; i++){
        int cnt(0);
        for (int j = 0; j < n; j++){
            if (a[j][i]==0)
                cnt++;
        }
        if(cnt==n)
            cot0++;
    }
//    cout << dong0 << ' ' << cot0 << endl;
    cout << (m*dong0+n*cot0)-(dong0*cot0);
    return 0;
}
