#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[5], dem(0), max(0), xuathien;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == a[i + 1])
            dem++;
        else
        {
            if (dem >= max)
            {
                max = dem;
                xuathien = a[i];
            }
            dem = 0;
        }
    }
    cout << xuathien;
    return 0;
}
