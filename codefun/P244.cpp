#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    long long length1 = str1.length();
    long long length2 = str2.length();
    if (length2 > length1)
        cout << str2;
    else
        cout << str1;
    return 0;
}