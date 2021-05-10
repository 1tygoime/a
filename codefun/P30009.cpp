#include <bits/stdc++.h>
using namespace std;

#define MAX 100

long long minnHang(long long a[][MAX], long long hang, long long cot){
    long long minn = a[hang][0];
    for (long long i = 0; i < cot; i++)
        if (minn > a[hang][i]) minn = a[hang][i];
    return minn;
}

int main(){
    long long a[MAX][MAX], m, n;
    cin >> n >> m;
    for (long long i = 0; i < n; i++){
        for (long long j = 0; j < m; j++)
            cin >> a[i][j];
    }
    long long minn = minnHang(a,0,m);
    for (long long i = 0; i < n; i++){
        if (minn < minnHang(a,i,m)) minn = minnHang(a,i,m);
    }
    cout << minn;
    return 0;
}