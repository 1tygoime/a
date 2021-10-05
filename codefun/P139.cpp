#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long res(1);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res *= 2;
    }
    res++;
    res *= res;
    cout << res;
    return 0;
}
