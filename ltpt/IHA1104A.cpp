#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long a[++n];
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int p;
        cin >> p;
        cout << a[p] << '\n';
    }
    return 0;
}
