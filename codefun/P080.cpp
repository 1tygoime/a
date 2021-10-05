#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n, h(0), p(0), s(0);
    cin >> n;
    if (n < 60)
    {
        s = n;
    }
    else
    {
        if (n < 3600)
        {
            p = n / 60;
            s = n % 60;
        }
        else
        {
            h = n / 3600;
            unsigned long long j = n % 3600;
            p = j / 60;
            s = j % 60;
        }
    }
    cout << setw(2) << setfill('0') << h << ":";
    cout << setw(2) << setfill('0') << p << ":";
    cout << setw(2) << setfill('0') << s;
    return 0;
}