#include <bits/stdc++.h>
using namespace std;
int cnt, n, a[100];

void Try(int i)
{
    if (i == n)
    {
        cnt++;
        return;
    }
    Try(i + 1);
    if (a[i] != i && a[i] != i + 1)
        Try(a[i]);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);
    cout << cnt;
    return 0;
}
