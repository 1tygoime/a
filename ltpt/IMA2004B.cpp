#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int nmax = 5005;

ll C[nmax][nmax];
int k, n, base;

int main()
{
    fast

            cin >>
        k >> n >> base;
    for (int i = 0; i <= n; i++)
    {
        //        C[0][i]=C[i][i]=1;
        for (int j = i; j <= n; j++)
        {
            if (i == 0 || i == j)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] % base + C[i][j - 1] % base) % base;
        }
    }
    cout << C[k][n];
    return 0;
}