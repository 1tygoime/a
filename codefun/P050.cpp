#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long double result1 = (a/(double)b)*c;
    long double result = result1/d;
    cout << setprecision(2) << fixed << result;
    return 0;
}