#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int main()
{
    int res = 0, n, k;
    char b;
    string s;
    cin >> n >> s >> k >> b;

    s.insert(--k, 1, b);

    for (int i = k, j = k;;)
    {
        char c = s[j];
        while (i <= n && s[i] == c)
            i++;
        while (j >= 0 && s[j] == c)
            j--;
        if (i - j - 1 - res < 3 || s[i - 1] != s[j + 1])
            break;
        res = i - j - 1;
    }

    cout << res;

    return 0;
}