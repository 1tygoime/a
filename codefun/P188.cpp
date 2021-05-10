#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for (long long i = 1; i <= n-1; i++){
        for (long long j = 1; j <= n - 1; j++) cout << n - 1 << ' ';
        cout << endl;
    }
    return 0;
}