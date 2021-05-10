#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll countSquares(ll a, ll b)
{
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1);
}

int main()
{
    ll b;
    cin >> b;
    cout << countSquares(1LL,b);
    return 0;
}
