#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c)
        cout << "NO";
    else if (b + c <= a)
        cout << "NO";
    else if (c + a <= b)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}