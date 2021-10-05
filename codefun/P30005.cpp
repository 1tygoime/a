#include <bits/stdc++.h>
using namespace std;

bool nt(long long n)
{
    if (n < 2)
        return false;
    else
    {
        long long count(0);
        for (long long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 0)
            return true;
        else
            return false;
    }
}

int main()
{
    long long a[100][100], m, n, count(0);
    cin >> m >> n;
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (nt(a[i][j]))
                count++;
        }
    }
    cout << count;
    return 0;
}