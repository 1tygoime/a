#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t, a, b;

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        if (b % 2 == 1)
            cout << "Minh 11";
        else
            cout << "Thanh";
        if (i < t)
            cout << '\n';
    }
    return 0;
}
