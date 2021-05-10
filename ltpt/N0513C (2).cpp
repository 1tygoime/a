#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long m = LLONG_MIN,a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++){
        long long s(0);
        for (int k = 0; k <= i; k++)
            s+=a[i-k][k];
        if (s > m)
            m = s;
    }
    for (int j = 1; j < n; j++){
        long long s(0);
        for (int k = 0; j + k < n; k++)
            s+= a[n-1-k][j+k];
        if (s > m)
            m = s;
    }
    cout << m;
    return 0;
}
