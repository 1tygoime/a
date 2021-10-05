#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
}

int main()
{
    ll a[5000];
    int i = 2, n, dem = 1, k = 1;
    cin >> n;
    while (k <= n)
    {
        if (isPrime(i))
        {
            if (isPrime(dem))
            {
                a[k] = i;
                k++;
            }
            dem++;
        }
        i++;
    }
    cout << a[n];
    return 0;
}
