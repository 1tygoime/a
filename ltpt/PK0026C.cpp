#include <bits/stdc++.h>
using namespace std;

#define ll long long
////
int n, m, k, cnt[4000005], max_occur, pos_max, x, res;
int occur[4000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    n *= m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cnt[x]++;
        max_occur = max(max_occur, cnt[x]);
        pos_max = max(pos_max, x);
    }
    if (max_occur == n)
    {
        cout << max_occur;
        return 0;
    }
    for (int i = 0; i <= pos_max; i++)
        if (cnt[i])
            occur[cnt[i]]++;
    for (int i = max_occur; i >= 0 && k > 0; --i)
    {
        if (!occur[i])
            continue;
        if (occur[i] <= k)
            res += i * occur[i],
                k -= occur[i];
        else
        {
            res += i * k;
            break;
        }
    }
    cout << res;
}
