#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long count(0);
    string str;
    getline(cin, str);
    int length = str.length() - 1;
    for (int i = 0; i <= length; i++)
        if (islower(str[i]))
            count++;
    cout << count << '\n';
    for (int i = 0; i <= length; i++)
        putchar(toupper(str[i]));
    return 0;
}