#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], x, result(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    cin >> x;
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] == x)
        {
            result++;
        }
    }
    cout << result;
    return 0;
}