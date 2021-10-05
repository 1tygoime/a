#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100005], chan(0), x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            chan++;
        if (chan == x)
            break;
        else
            cout << a[i] << ' ';
    }
    return 0;
}
