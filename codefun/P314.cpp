#include <bits/stdc++.h>
using namespace std;

int a[100001], n, cnt(0);

void Xuat()
{
    for (int i = 1; i < n; i++)
        if (a[i] == 1 && a[i + 1] == 1)
            return;
    cnt++;
}

void Thu(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
            Xuat();
        else
            Thu(i + 1);
    }
}

int main()
{
    cin >> n;
    Thu(1);
    cout << cnt;
    return 0;
}
