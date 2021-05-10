#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long m,n,a;
    cin >> n >> m >> a;
    while(n%a)
        n+=__gcd(n,a);
    while(m%a)
        m+=__gcd(m,a);
    cout << 1LL*(m*n)/(a*a);
    return 0;
}