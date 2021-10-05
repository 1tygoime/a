#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count(0);
    cin >> n >> m;
    string str;
    cin >> str;
    bool hole = false, check = false;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'H')
        {
            count++;
            hole = true;
        }
        else if (hole)
        {
            if (count >= m)
                check = true;
            count = 0;
        }
    }
    if (check == true)
        cout << "R. I. P";
    else
        cout << "YOLO!";
    return 0;
}
