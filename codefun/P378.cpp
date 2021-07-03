#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long double x = 360.0/(180-n);
    if (x > 0 && x == (long long) x) cout << "YES";
    else cout << "NO";
    return 0;
}
