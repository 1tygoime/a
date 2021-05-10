#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long x, y, result(1);
    cin >> x >> y;
    for (unsigned long long i = 1; i <= y; i++)
        result *= x;
    cout << result;
    return 0;
}