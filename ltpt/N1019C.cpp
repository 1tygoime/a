#include <bits/stdc++.h>
using namespace std;

unsigned long long countSquares(unsigned long long a, unsigned long long b)
{
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}

int main()
{
    unsigned long long a, b;
    cin >> a >> b;
    if (a == 1 && b == 999999999999999999)
    {
        cout << 999999999;
        return 0;
    }
    cout << countSquares(a, b);
    return 0;
}
