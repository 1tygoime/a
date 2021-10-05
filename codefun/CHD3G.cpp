#include <bits/stdc++.h>
using namespace std;
long long a[100005], ma;
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        if (n == 1)
            cout << a[1] << '\n';
        else if (n == 2)
            cout << a[1] * a[2] << '\n';
        else if (n == 3)
            cout << a[1] * a[2] * a[3] << '\n';
        else if (n == 4)
            cout << a[1] * a[2] * a[3] * a[4] << '\n';
        else
        {
            ma = a[1] * a[2] * a[3] * a[4] * a[5];
            for (int i = 1; i <= n - 4; i++)
                ma = max(ma, a[i] * a[i + 1] * a[i + 2] * a[i + 3] * a[i + 4]);
            cout << ma << '\n';
        }
    }
    return 0;
}
