#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[105][105],n,gt(1),vthang(0),vtcot(0);
    cin >> n;
    if (n == 2) {
        cout << "1 2\n\n4 3";
        return 0;
    }
    int sohang = n, socot = n;
    while (gt <= n * n){
        for (int i = vtcot; i < socot; i++){
            a[vthang][i] = gt;
            gt++;
        }
        for (int i = vthang+1; i < sohang; i++){
            a[i][socot-1] = gt;
            gt++;
        }
        for (int i = socot-2; i >= vtcot; i--){
            a[sohang-1][i] = gt;
            gt++;
        }
        for (int i = sohang-2; i > vthang; i--){
            a[i][vtcot] = gt;
            gt++;
        }
        vthang++; vtcot++; sohang--; socot--;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
    cout << endl;
    }
    return 0;
}
