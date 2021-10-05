#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], b[100005];
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> b[i];
    for (long long i = 0; i < 100005; i++)
        a[i] = 0;
    for (long long i = 0; i < n; i++)
    {
        a[b[i]]++;
    }
    for (long long i = 0; i < 100005; i++)
        if (a[i] >= 2)
            cout << i << ' ';
    return 0;
}
