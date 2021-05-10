#include <bits/stdc++.h>
using namespace std;

long long C(long long k, long long n){
    if (k == 0 || k == n) return 1;
    else return C(k, n- 1) + C(k-1, n - 1);
}


int main(){
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++){
        for (long long j = 0; j <= i; j++){
            cout << C(j,i) << ' ';
        }
        cout << '\n';
    }
    return 0;
}