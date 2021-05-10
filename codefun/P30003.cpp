#include <bits/stdc++.h>
using namespace std;

long long gt(long long n){
    if (n == 0 || n == 1) return 1;
    else{
        long long result(1);
        for (long long i = 1; i <= n; i++) result *= i;
        return result;
    }
}

long long C(long long k, long long n){
    return gt(n)/(gt(k)*gt(n-k));
}


int main(){
    long long m,n,p,q;
    cin >> m >> n >> p >> q;
    long long result = C(m,n) - C(p,q);
    cout << result;
    return 0;
}
