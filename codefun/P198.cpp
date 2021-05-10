#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a[100005];
    cin >> n >> m;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        long long t = m / a[i];
        cout << t << '\n';
        m -= a[i]*t;
    }
    return 0;
}