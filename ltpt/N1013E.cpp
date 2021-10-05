#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll s(ll n)
{
    ll tmp = sqrt(n), t(0);
    for (int i = 1; i <= tmp; i++)
    {
        t += n / i;
    }
    t = 2 * t - (tmp * tmp);
    return t;
}

int main()
{
    ll n;
    cin >> n;
    cout << s(n);
    return 0;
}
/*
ll mu(ll a, ll n)
{
    if(n==0) return 1;
    ll tam = mu(a,n/2);
    tam = (tam*tam)%mod;
    if(n%2==1) tam = (tam*a)%mod;
    return tam;
}
*/
