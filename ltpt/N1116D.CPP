#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a[25], mi(LLONG_MAX), gr1, gr2;
int x[25], cnt, n;

void out()
{
    gr1 = gr2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i])
            gr1 += a[i];
        else
            gr2 += a[i];
    }
    ll tmp = abs(gr1 - gr2);
    if (mi > tmp)
    {
        mi = tmp;
        cnt = 1;
    }
    else if (mi == tmp)
        cnt++;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
            out();
        else
            Try(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    Try(1);

    cout << mi << ' ' << cnt / 2;

    return 0;
}
