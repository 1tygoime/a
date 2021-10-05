#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    getline(cin, str1);
    long long len = str1.length();
    if (len < 4)
    {
        cout << "Invalid";
        return 0;
    }
    bool low, up, digit;
    low = up = digit = false;
    for (long long i = 0; i < len; i++)
    {
        if (islower(str1[i]))
            low = true;
        else if (isupper(str1[i]))
            up = true;
        else if (isdigit(str1[i]))
            digit = true;
        else
        {
            cout << "Invalid";
            return 0;
        }
    }
    if (low == false || up == false || digit == false)
        cout << "Weak";
    else
        cout << "Strong";
    return 0;
}
