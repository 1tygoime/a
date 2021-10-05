#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10005], n;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << a[n - 2] << ' ' << a[1];
    return 0;
}
