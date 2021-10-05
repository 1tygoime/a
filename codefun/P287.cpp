#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, tbc(1), a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        tbc *= a[i];
    }
    cout << tbc;
    return 0;
}