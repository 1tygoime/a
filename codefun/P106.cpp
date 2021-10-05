// Su dung ngay Julius, tham khao tai wiki

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long dd, mm, yy, JDA, JDM, JDY, JDD, JDN;
    cin >> dd >> mm >> yy;
    JDA = (14 - mm) / 12;
    JDY = yy + 4800 - JDA;
    JDM = mm + 12 * JDA - 3;
    JDN = dd - 32045 + ((153 * JDM + 2) / 5) + 365 * JDY + (JDY / 4) - JDY / 100 + JDY / 400;
    if (JDN % 7 == 0)
        cout << "Mon";
    else if (JDN % 7 == 1)
        cout << "Tue";
    else if (JDN % 7 == 2)
        cout << "Wed";
    else if (JDN % 7 == 3)
        cout << "Thu";
    else if (JDN % 7 == 4)
        cout << "Fri";
    else if (JDN % 7 == 5)
        cout << "Sat";
    else if (JDN % 7 == 6)
        cout << "Sun";
    return 0;
}
