// Cach cai dat BIGNUM cu, qua thu muc SPOJ de sua lai cach cai //
#include <bits/stdc++.h>
using namespace std;
string a[10005], A;
int n;
string mul(string a, string b)
{
    string res = "";
    int n = a.length();
    int m = b.length();
    int len = n + m - 1;
    int carry = 0;
    for (int i = len; i >= 0; i--)
    {
        int tmp = 0;
        for (int j = n - 1; j >= 0; j--)
            if (i - j <= m && i - j >= 1)
            {
                int a1 = a[j] - 48;
                int b1 = b[i - j - 1] - 48;
                tmp += a1 * b1;
            }
        tmp += carry;
        carry = tmp / 10;
        res = (char)(tmp % 10 + 48) + res;
    }
    while (res.length() > 1 && res[0] == '0')
        res.erase(0, 1);
    return res;
}

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

void init()
{
    a[0] = "0";
    a[1] = "1";
    for (int i = 2; i <= n; i++)
        a[i] = add(mul(A, a[i - 1]), a[i - 2]);
}

int main()
{
    while (cin >> n >> A)
    {
        init();
        string tmp = a[n];
        cout << tmp[0] << tmp[1] << tmp[2] << tmp[3] << tmp[4] << '\n';
    }
    return 0;
}
