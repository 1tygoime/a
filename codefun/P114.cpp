#include <bits/stdc++.h>
using namespace std;

bool nhuan(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return true;
    else
        return false;
}

int main()
{
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int dd, mm, yy, cnt(0);
    cin >> dd >> mm >> yy;
    for (int i = 1; i < mm; i++)
    {
        if (i == 4 || i == 6 || i == 9 || i == 11)
            cnt += 10;
        else if (i == 2)
        {
            if (nhuan(yy))
                cnt += 10;
            else
                cnt += 9;
        }
        else
            cnt += 11;
    }
    for (int i = 0; i < 11; i++)
    {
        if (a[i] <= dd)
            cnt++;
    }
    cout << cnt;
    return 0;
}
