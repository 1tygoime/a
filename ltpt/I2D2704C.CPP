#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int a[305][305], cnt[5][5], s, m, n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i < m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            memset(cnt, 0, sizeof(cnt));

            for (int k = 1; k <= n; k++)
            {
                if (a[i][k] < a[j][k])
                    cnt[a[i][k]][a[j][k]]++;
                else
                    cnt[a[j][k]][a[i][k]]++;
            }

            s += cnt[1][2] * cnt[3][4] + cnt[1][3] * cnt[2][4] + cnt[1][4] * cnt[2][3];
        }
    }

    cout << s;
}
