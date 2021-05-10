#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100][100],m=LLONG_MIN;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n; j++)
            cin >> a[i][j];
    }
    for (int j = 0; j < n; j++){
        int i = 0;
        long long s = 0;
        for (int k = 0; j + k < n; k++)
            s+= a[i+k][j+k];
        if (s > m) m = s;
    }
    for (int i = 1; i < n; i++){
        int j = 0;
        long long s = 0;
        for (int k = 0; i + k < n; k++)
            s+= a[i+k][j+k];
        if (s > m) m = s;
    }
    cout << m;
    return 0;
}
