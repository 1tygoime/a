#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == c)
            cout << "Inf";
        else
            cout << "No";
    }
    else
    {
        cout << (c - b) / a;
    }
    return 0;
}
