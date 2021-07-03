
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++){
        long long a,b;
        cin >> a >> b;
        cout << __gcd(a,b) << '\n';
    }
    return 0;
}
