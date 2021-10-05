// Ckn = Akn / (k!)
// tinh Ckn bang viec pt thua so nguyen to

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second
#define nmax 1000005

ll k, n, mod, factor[nmax], t[nmax], x, res = 1;

ll pw(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tmp = pw(a, b / 2) % mod;
    tmp = tmp % mod * tmp % mod;
    if (b % 2)
        tmp = tmp % mod * a % mod;
    return tmp;
}

void sieve()
{
    factor[1] = 1;
    for (int i = 2; i <= nmax; i++)
    {
        if (!factor[i])
            for (int j = i; j <= nmax; j += i)
                factor[j] = i; // uoc nguyen to nho nhat cua j
    }
}

int main()
{
    fast;
    sieve();
    cin >> k >> n >> mod;
    //Akn
    for (int i = n - k + 1; i <= n; i++)
    {
        x = i;
        while (x > 1)
            t[factor[x]]++, x /= factor[x];
    }
    //k!
    for (int i = 1; i <= k; i++)
    {
        x = i;
        while (x > 1)
            t[factor[x]]--, x /= factor[x];
    }
    for (int i = 1; i <= nmax - 5; i++)
        res = res % mod * pw(i, t[i]) % mod;
    cout << res;
    return 0;
}
