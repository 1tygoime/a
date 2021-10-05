#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll area(ll x[], ll y[], int n)
{
   ll area = 0.0;
   int j = n - 1;
   for (int i = 0; i < n; i++)
   {
      area += (x[j] + x[i]) * (y[j] - y[i]);
      j = i;
   }
   return abs(area);
}
int main()
{
   ll X[100005], Y[100005];
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> X[i] >> Y[i];
   }
   ll tmp = area(X, Y, n);
   ll t1 = 2;
   ll d1v = __gcd(tmp, t1);
   cout << tmp / d1v << ' ' << t1 / d1v;
}
