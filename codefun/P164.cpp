#include <bits/stdc++.h>
using namespace std;
#define MAX 50

bool chec(int n)
{
    if (n < 2)
        return false;
    else
    {
        int cnt(0);
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 0)
            return true;
        else
            return false;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (chec(i))
            cout << i << ' ';
    }
    return 0;
}
