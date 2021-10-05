///https://stackoverflow.com/questions/28356453/longest-positive-sum-substring
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
ll p[100005], q[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> p[0];
    for (int i = 1; i < n; i++)
    {
        cin >> p[i];
        p[i] += p[i - 1];
    }
    q[n - 1] = p[n - 1];
    for (int i = n - 2; i >= 0; i--)
        q[i] = max(q[i + 1], p[i]);

    int a = 0, b = 0, ma = 0;
    ll curr;
    while (b < n)
    {
        curr = (a ? q[b] - p[a - 1] : q[b]);
        if (curr >= 0)
            ma = max(ma, b - a + 1), b++;
        else
            a++;
    }
    cout << ma;

    return 0;
}
