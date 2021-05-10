#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long double S(0);
    cin >> n;
    for (long long i = 1; i <= n; i++) S += 1/(long double)i;
    cout << setprecision(3) << fixed << S;
    return 0;
}