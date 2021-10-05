#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
            cout << '#';
        cout << endl;
    }
    return 0;
}
