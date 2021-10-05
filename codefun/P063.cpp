#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a1 = 1, a2 = 1, a3;
    while (a1 + a2 <= n)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }
    if (a3 == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
