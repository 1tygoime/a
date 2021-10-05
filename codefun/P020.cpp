#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char i, j;
    i = str[4];
    j = str[8];
    cout << char((int)i - 32) << ' ' << char((int)j - 32);
    return 0;
}