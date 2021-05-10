#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,dem(0);
    cin >> n;
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0) dem++;
    }
    if (dem == 0) cout << 1;
    else cout << 0;
    return 0;
}