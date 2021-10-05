#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long length = str.length();
    for (long long i = 1; i <= length; i++)
        cout << str.substr(0, i) << '\n';
    for (long long i = length; i >= 1; i--)
        cout << str.substr(0, i) << '\n';
    return 0;
}