#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ngto(ll n)
{
    if (n < 2)
        return false;
    else
    {
        for (ll i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
}

bool sieungto(ll n)
{
    while (n > 0)
    {
        if (!(ngto(n)))
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    if (sieungto(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
