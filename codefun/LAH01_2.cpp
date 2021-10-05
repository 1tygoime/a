#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, t1, t2;
    while (cin >> n >> k)
    {
        t1 = t2 = n;
        while (t2 >= k)
        {
            t1 += t2 / k;
            t2 = t2 / k + t2 % k;
        }
        cout << t1 << '\n';
    }
    return 0;
}
