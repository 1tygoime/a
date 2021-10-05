#include <bits/stdc++.h>
using namespace std;
int a[10005], n, cnt(0);
bool b[10005];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]] = true;
    }
    for (int i = 0; i < 10005; i++)
        if (b[i] == true)
            cnt++;
    if (cnt == n)
        cout << 0;
    else
    {
        int res = 1;
        for (int i = 0; i < n; i++)
        {
            int u = i, v = i;
            while (u >= 0 && v < n)
            {
                if (a[u] == a[v])
                {
                    res = max(res, v - u + 1);
                    u--;
                    v++;
                }
                else
                    break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int u = i, v = i + 1;
            while (u >= 0 && v < n)
            {
                if (a[u] == a[v])
                {
                    res = max(res, v - u + 1);
                    u--;
                    v++;
                }
                else
                    break;
            }
        }
        cout << res;
    }
    return 0;
}
