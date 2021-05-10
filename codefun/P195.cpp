#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[100005],n;
    long double tbc(0);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        tbc += a[i];
    }
    tbc /= (long double)n;
    cout << setprecision(2) << fixed << tbc;
    return 0;
}