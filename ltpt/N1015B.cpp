//N1015B
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    int L, R;
    ll sum = 0;
    cin >> L >> R;
    vector<bool> isPrime(R - L + 1, true);

    for (int i = 2; i * i <= R; ++i)
    {
        for (int j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
        {
            isPrime[j - L] = false;
        }
    }

    if (1 >= L)
    {
        isPrime[1 - L] = false;
    }

    for (long long x = L; x <= R; ++x)
    {
        if (isPrime[x - L])
        {
            sum += 1LL * x;
        }
    }

    cout << sum;
}
