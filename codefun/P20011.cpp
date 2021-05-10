#include <bits/stdc++.h>
using namespace std;

long long giaithua(long long n){
    if (n == 0 || n == 1) return 1;
    else{
        long long result(1);
        for (long long i = 1; i <= n; i++) result *= i;
        return result;
    }
}

int main(){
    long long n,tong(0);
    cin >> n;
    long long rsl = giaithua(n);
    while (rsl > 0){
        tong += rsl % 10;
        rsl /= 10;
    }
    cout << tong;
    return 0;
}