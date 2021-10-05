#include <bits/stdc++.h>
using namespace std;

#define ull long long
#define MAX 1000005

int main()
{
    ull n, a[100005], i(0), k;
    cin >> n >> k;
    while (n > 0)
    {
        a[i] = n % k;
        n /= k;
        i++;
    }
    for (ull j = i - 1; j >= 0; j--)
        cout << a[j];
    return 0;
}
