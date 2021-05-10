#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, a[1000005], x, result(0);
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> a[i];
    cin >> x;
    for (long long i = 1; i <= n; i++){
        if (a[i] == x){
            result++;
            break;
        }
    }
    if (result == 0) cout << 0;
    else cout << 1;
    return 0;
}