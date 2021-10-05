#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n;
    cin >> n;
    cout << setprecision(2) << fixed;
    if (5574 >= n && n > 5573)
        cout << 1.4142127 * n;
    else
        cout << 1.4142132 * n;
    return 0;
}