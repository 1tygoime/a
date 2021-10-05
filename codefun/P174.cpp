
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    //    ll x1,x2,x3,x4,x5;
    ll a[10];
    for (int i = 1; i <= 5; i++)
        cin >> a[i];
    ll tmp = lcm(a[1], a[2]);
    for (int i = 3; i <= 5; i++)
        tmp = lcm(tmp, a[i]);
    cout << tmp;
    return 0;
}
