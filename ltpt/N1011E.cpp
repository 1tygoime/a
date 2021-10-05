/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define nmax 2000005
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
bool prime[nmax];
ll dp[nmax];

void sieve()
{
    for (int i = 2; i <= nmax; i++)
        prime[i] = 1;
    for (int i = 2; i * i <= nmax; i++)
        if (prime[i])
        {
            for (int j = i * i; j <= nmax; j += i)
                prime[j] = 0;
        }
    //dp[i] = so luong cac so nguyen to tu 1....i;
    for (int i = 1; i <= nmax; ++i)
    {
        dp[i] = dp[i - 1] + prime[i];
    }
}

int main()
{
    fast
    sieve();
    int t;
    for (cin >> t; t--;)
    {
        int n;
        cin >> n;
        cout << dp[2 * n] - dp[n] << (t > 0 ? "\n" : "");
    }
    return 0;
}
