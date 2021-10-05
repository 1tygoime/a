#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], tich(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        tich += i * a[i];
    }
    cout << tich;
    return 0;
}