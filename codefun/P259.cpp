#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string tmp = s;
    reverse(s.begin(), s.end());
    if (s == tmp)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
