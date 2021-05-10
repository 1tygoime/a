#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long a,b,c;
    cin >> a >> b >> c;
    if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        cout << "yes";
    else cout << "no";
    return 0;
}