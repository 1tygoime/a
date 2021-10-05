#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str = " wvutsrqponmlkjihgfedcbazyx ";
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << str[x];
    }
    return 0;
}
