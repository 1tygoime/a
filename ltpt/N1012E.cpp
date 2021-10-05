#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
// Chu so tan cung cua SNT
int p, a[4] = {1, 3, 7, 9}, cnt(0);

bool prime(ull x)
{
    if (x < 2)
        return false;
    else if (x == 2)
        return true;
    else if (x % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i <= sqrt(x); i++)
            if (x % i == 0)
                return false;
        return true;
    }
}

void Try(int n, ull s)
{
    // tinh tong cac chu so cua s
    if (int(log10(s)) + 1 == n)
    {
        cnt++;
    }
    else
        for (int i = 0; i < 4; i++)
        {
            ull t = s * 10 + a[i];
            if (prime(t))
                Try(n, t);
        }
}

int main()
{
    cin >> p;
    if (p == 1)
        cout << 4;
    else
    {
        // chu so bat dau cua SNT;
        Try(p, 2);
        Try(p, 3);
        Try(p, 5);
        Try(p, 7);
        cout << cnt;
    }
    return 0;
}
