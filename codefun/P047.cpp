#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long result = a*b + b*c + c*d + d*a;
    cout << result;
    return 0;
}