#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second
#define nmax 100005
#define out(v)                \
    for (const auto &c : (v)) \
        cout << c << ' ';     \
    cout << '\n';

int main()
{
    string s, res = "", token = "";
    cin >> s;
    for (const char &c : s)
    {
        if (isdigit(c))
            res.pb(c);
        else
            res.pb(' ');
    }
    stringstream ss(res);
    while (ss >> token)
    {
        cout << token << ' ';
    }
    return 0;
}
