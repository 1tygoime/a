#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,n,tich(1);
    cin >> x >> n;
    for (long long i = 1; i <= n; i++) tich *= x;
    cout << tich;
    return 0;
}