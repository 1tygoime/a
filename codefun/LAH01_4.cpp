#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << "Case " << i << ": ";
        for (int j = trunc(sqrt(n - 1)); j > 0; j--)
            if (n % j == 0)
            {
                cout << n - j * j << ' ';
            }
        cout << '\n';
    }
    return 0;
}
