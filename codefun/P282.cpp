#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a[200];
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> a[i];
    if (n%2 == 0) cout << a[n/2];
    else cout << a[(n-1)/2];
    return 0;
}