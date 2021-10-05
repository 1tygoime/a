#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c = " ";
    cin >> a >> b;
    if (a != "0")
        c = c + a;
    c = c + b;
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
}
