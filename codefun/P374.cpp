#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1.0)

int main(){
    long long n,a[100005];
    long double tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] % 2 == 0) tong -= PI*a[i]*a[i];
        else tong += PI*a[i]*a[i];
    }
    cout << setprecision(6) << fixed << tong;
    return 0;
}
