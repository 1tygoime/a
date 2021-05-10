#include <bits/stdc++.h>
using namespace std;
 
int h[] = {2, 1, -1, -2, -2, -1, 1, 2};
int c[] = {1, 2, 2, 1, -1, -2, -2, -1};
int chess[15][15], cnt = 1, n, x, y;
 
void out(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << chess[i][j] << ' ';
        cout << '\n';
    }
    exit(0);
}
 
void Try(int i, int j){
    for(int k = 0; k < 8; k++)
        if (i + h[k] > 0 && i + h[k] <= n && j + c[k] > 0 && j + c[k] <= n && !chess[i + h[k]][j + c[k]]){
            chess[i + h[k]][j + c[k]] = cnt++;
            if (cnt > n * n) out();
            else Try(i + h[k], j + c[k]);
            chess[i + h[k]][j + c[k]]  = 0;
            cnt--;
        }
}
 
int main(){
    cin >> n >> x >> y;
    chess[x][y] = cnt++;
    Try(x, y);
}
 