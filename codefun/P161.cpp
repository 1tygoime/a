// Cach cai BIGNUM cu, sang thu muc SPOJ de cai dat lai //
#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
        string res = "";
        while (a.length() < b.length())
                a = "0" + a;
        while (b.length() < a.length())
                b = "0" + b;
        int carry = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
                int tmp = a[i] - 48 + b[i] - 48 + carry;
                carry = tmp / 10;
                tmp = tmp % 10;
                res = (char)(tmp + 48) + res;
        }
        if (carry > 0)
                res = "1" + res;
        return res;
}

int main()
{
        int m, n;
        string a = "", b = "";
        char t, t1;
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
        {
                cin >> t;
                a += t;
        }
        for (int i = 1; i <= n; i++)
        {
                cin >> t1;
                b += t1;
        }
        string res = add(a, b);
        while (res.length() > 50)
        {
                cout << res.substr(0, 50) << '\n';
                res.erase(0, 50);
        }
        cout << res;
        return 0;
}
