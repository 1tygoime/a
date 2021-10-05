#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count(0);
    string str;
    char c;
    cin >> str >> c;
    long long length = str.length();
    for (long long i = 0; i < length; i++)
    {
        if (str[i] == c)
            count++;
    }
    cout << count;
    return 0;
}