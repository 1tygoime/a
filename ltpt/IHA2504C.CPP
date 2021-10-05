#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a.substr(i) == b.substr(0, a.size() - i))
        {
            cout << a.substr(0, i) << b;
            return 0;
        }
    }
    cout << -1; //dont have
    return 0;
}
