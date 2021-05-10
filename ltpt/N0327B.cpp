#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull jump(ull n, ull k){
    if (k == 0)
        return 0;
    if (k % n == 0)
        return n;
    return jump(k%n,n);
}

int main(){
    ull n,k;
    cin >> n >> k;
    cout << jump(n,k);
    return 0;
}
