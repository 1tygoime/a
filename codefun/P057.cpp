#include <bits/stdc++.h>
using namespace std;

int main () {
    unsigned long long n, count(0);
    cin >> n;
    for (unsigned long long i = 1; i <= sqrt(n); i++){
        if (n% i == 0) count ++;
    }
    cout << count;
    return 0;
}