#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fo(i, a, b) for (int i = (a); i < (b); i++)
#define fu(i, a, b) for (int i = (a); i <= (b); i++)
const ll mod = 1e9 + 7;

int n, a[105][105];
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int i = 1, j = n / 2 + 1, k = 1;
    while (k <= n * n)
    {
        a[i][j] = k;
        if (k % n == 0)
        {
            i++;
            if (i > n)
                i = i - n;
        }
        else
        {
            if (i == 1)
                i = n;
            else
                i--;
            if (j == n)
                j = 1;
            else
                j++;
        }
        k++;
    }
    fu(i, 1, n)
    {
        fu(j, 1, n)
                cout
            << a[i][j] << ' ';
        cout << '\n';
    }
}
