#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
int main()
{
    int n;
    ll a[MAX];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << abs(a[n] - a[1]);
    return 0;
}
