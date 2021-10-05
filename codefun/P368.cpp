#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, count(0);
    cin >> n;
    for (unsigned long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}