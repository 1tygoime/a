#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int q, p;
        cin >> q >> p;
        if (p - q >= 2)
            count++;
    }
    cout << count;
    return 0;
}