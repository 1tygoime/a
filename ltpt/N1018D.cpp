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

ll L, R, a[100000006];
int cnt;

int main()
{
    fast;
    // tinh tong cac uoc (tru 1 va chinh no)
    cin >> L >> R;
    for (int i = 1; i < R; i++)
    {
        for (int j = 2; j <= R / i; j++)
            a[i * j] += i;
    }
    for (; L <= R; L++)
    {
        if (L == a[a[L]] && L <= a[L])
            cnt++;
    }
    cout << cnt;
    return 0;
}
