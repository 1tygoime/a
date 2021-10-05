#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100005], n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    cout << a[1] << ' ' << a[2] << ' ' << a[3];
    return 0;
}