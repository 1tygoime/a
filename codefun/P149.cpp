#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if (a + b == c) cout << '+';
    else if (b + c == a) cout << '+';
    else if (c + a == b) cout << '+';
    else cout << 0;
    return 0;
}