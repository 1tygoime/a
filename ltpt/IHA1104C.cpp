#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int base = 31;
const ll MOD = 1000000007;
const ll maxn = 100005;

int cnt;

ll POW[maxn], hashT[maxn];

ll getHashT(int i, int j)
{
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

int main()
{
    string T, P;
    cin >> P >> T;

    int lenT = T.size(), lenP = P.size();
    T = " " + T;
    P = " " + P;
    POW[0] = 1;

    for (int i = 1; i <= lenT; i++)
        POW[i] = (POW[i - 1] * base) % MOD;

    for (int i = 1; i <= lenT; i++)
        hashT[i] = (hashT[i - 1] * base + T[i] - 'a' + 1) % MOD;

    ll hashP = 0;
    for (int i = 1; i <= lenP; i++)
        hashP = (hashP * base + P[i] - 'a' + 1) % MOD;

    for (int i = 1; i <= lenT - lenP + 1; i++)
        if (hashP == getHashT(i, i + lenP - 1))
            cnt++;
    cout << cnt;
}
