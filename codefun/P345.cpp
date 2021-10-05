#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tong(0), n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        if (i % 2 == 0)
            tong += i;
    cout << tong;
    return 0;
}