#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string temp = n;
    int dec = 0, base = 1, length = n.length();
    for (int i = length - 1; i >= 0; i--)
    {
        if (n[i] == '1')
            dec += base;
        base *= 2;
    }
    cout << dec;
    return 0;
}
