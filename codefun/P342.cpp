#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,tich(1);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        if (i % 2 == 1) tich *= i;
    }
    cout << tich;
    return 0;
}