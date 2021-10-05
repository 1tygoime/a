#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

ll gt(ll n)
{
    ll p(1);
    if (n == 0)
        return p;
    else
    {
        for (ll i = 1; i <= n; i++)
            p *= i;
        return p;
    }
}

int main()
{
    ll t1(1);
    string s;
    cin >> s;
    int a[255];
    ll length = s.length();
    for (ll i = 0; i < 255; i++)
        a[i] = 0;
    for (ll i = 0; i < s.length(); i++)
        a[s[i]]++;
    for (ll i = 0; i < 255; i++)
        if (a[i] > 0)
            t1 *= gt(a[i]);
    cout << gt(length) / t1;
    return 0;
}
