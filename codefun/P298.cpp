#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = n; i >= 1; i--)
        cout << a[i] << ' ';
    return 0;
}
