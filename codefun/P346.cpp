#include <bits/stdc++.h>
using namespace std;

int main(){
    long long tich(1),n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        if (i % 2 == 0) tich *= i;
    cout << tich;
    return 0;
}