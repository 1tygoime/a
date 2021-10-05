#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define base 31
#define ll long long
ll POW[MAX], hashT[MAX], mod;
string t;

ll HASH(int i, int j)
{
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + mod * mod) % mod;
}

void init()
{
    int len = t.length();
    t = " " + t;
    POW[0] = 1;
    for (int i = 1; i <= len; i++)
        POW[i] = (POW[i - 1] * base) % mod;
    for (int i = 1; i <= len; i++)
        hashT[i] = (hashT[i - 1] * base + t[i] - 'a' + 1) % mod;
}

int main()
{
    int i, j, q;
    cin >> mod >> t;
    init();
    cin >> q;
    while (q--)
    {
        cin >> i >> j;
        cout << HASH(i, j) << '\n';
    }
    return 0;
}
