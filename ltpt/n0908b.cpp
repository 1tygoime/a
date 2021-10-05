#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ull ts(1), ms(1), ts1, ms1, ts2, ms2;
    while (cin >> ts1 >> ms1)
    {
        ull tmp = __gcd(ts1, ms1);
        ts1 /= tmp;
        ms1 /= tmp;
        ts *= ts1;
        ms *= ms1;
    }
    ull temp = __gcd(ts, ms);
    ts /= temp;
    ms /= temp;
    cout << ts << ' ' << ms;
    return 0;
}