#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, p, time(425), count(0);

    for (int i = 1; i <= 6; i++)
    {
        cin >> h >> p;
        int time1 = h * 60 + p;
        if (time1 > time)
            count++;
    }

    if (count > 2)
        cout << ":'(";
    else
        cout << ":)";
    return 0;
}