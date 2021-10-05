#include <bits/stdc++.h>
using namespace std;

int a[100], n, k, cnt(0);

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void Xuat()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            Xuat();
        }
        else
            Try(i + 1);
    }
}

void Try1(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            cnt++;
        }
        else
            Try1(i + 1);
    }
}

int main()
{
    cin >> k >> n;
    init();
    Try1(1);
    cout << cnt << '\n';
    Try(1);
    return 0;
}
