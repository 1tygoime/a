#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1)
        cout << "NO";
    else
    {
        int check = 1;
        for (long long i = 1; i <= n; i++)
        {
            if (a[i] == a[n - i + 1])
                check = 0;
            else
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}