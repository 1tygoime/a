#include <bits/stdc++.h>
using namespace std;

long long tohop(long long k, long long n)
{
    if (k == 0 || k == n)
        return 1;
    else
        return tohop(k - 1, n - 1) + tohop(k, n - 1);
}

int main()
{
    long long n, k;
    cin >> n >> k;
    cout << tohop(k, n);
    return 0;
}