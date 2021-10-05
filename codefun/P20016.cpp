#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count(0);
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 33; j++)
        {
            for (int k = 3; k <= (100 - i - j); k += 3)
                if (5 * i + 3 * j + (k / 3) == 100 && i + j + k == 100)
                    count++;
        }
    }
    cout << count << endl
         << endl;
    return 0;
}