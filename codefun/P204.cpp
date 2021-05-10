#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a[100005],tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i <= n; i++){
        if (a[i] < 0) break;
        tong += a[i];
    }
    cout << tong;
    return 0;
}