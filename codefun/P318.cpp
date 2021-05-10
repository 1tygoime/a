#include <bits/stdc++.h>
using namespace std;

long long UCLN(long long a, long long b){
    if (a == 0 || b == 0) return a + b;
    else{
        while (a!= b){
            if (a > b) a -= b;
            else b -= a;
        }
        return a;
    }
}

int main(){
    long long a[100005],n;
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> a[i];
    long long d = UCLN(a[1],a[2]);
    for (long long i = 3; i <= n; i++){
        if (d == 1) break;
        else d = (UCLN(d,a[i]));
    }
    cout << d;
    return 0;
}