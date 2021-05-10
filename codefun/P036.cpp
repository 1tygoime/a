#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,mod;
    cin >> a >> b >> c >> d >> mod;
    long long result = ((a+b)*(c+d))%mod;
    cout << result;
    return 0;
}