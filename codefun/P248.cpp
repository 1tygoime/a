#include <bits/stdc++.h>
using namespace std;

int main()
{
    int important(0);
    string str;
    cin >> str;
    long long length = str.length();
    for (long long i = 0; i <= length - 1; i++)
        if (str[i] == 'n')
            important++;
    cout << important;
    return 0;
}