#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tuso, mauso, t1, t2;
    cin >> tuso >> mauso;
    t1 = tuso;
    t2 = mauso;
    if (tuso == 0)
        cout << tuso << " " << mauso;
    else
    {
        while (tuso != mauso)
        {
            if (tuso > mauso)
                tuso -= mauso;
            else
                mauso -= tuso;
        }
        cout << t1 / tuso << " " << t2 / tuso;
    }
    return 0;
}