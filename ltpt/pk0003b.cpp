#include <bits/stdc++.h>
using namespace std;
int res = INT_MIN, n, a[100005];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    cout << a[0] - a[n - 1];
    return 0;
}
