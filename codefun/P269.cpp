#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100][100],n,tong(0);
    cin >> n;
    for (long long i = 0; i < n; i++){
        for (long long j = 0 ; j < n; j++)
            cin >> a[i][j];
    }
    for (long long i = 0; i < n; i++){
        for (long long j = 0 ; j < n; j++)
            if (i == j || i + j == n - 1) tong += a[i][j];
    }
    cout << tong;
    return 0;
}
