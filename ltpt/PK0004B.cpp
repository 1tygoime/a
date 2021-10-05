#include <bits/stdc++.h>
using namespace std;
int n, mi(INT_MAX), a[100005];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
        mi = min(mi, abs(a[i] - a[i + 1]));
    cout << mi;
}
