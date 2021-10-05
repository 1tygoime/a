#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], b[100005], count1(0), count2(0), count3(0);
    for (long long i = 0; i < 5; i++)
        cin >> b[i];
    for (long long i = 0; i < 100005; i++)
        a[i] = 0;
    for (long long i = 0; i < 5; i++)
    {
        a[b[i]]++;
    }
    for (long long i = 0; i < 100005; i++)
    {
        if (a[i] == 4)
            count1++;
        else if (a[i] > 4)
            count2++;
        else
            count3++;
    }
    if (count2 > 0)
        cout << "NO";
    else if (count1 > 0)
        cout << "YES";
    else if (count3 > 0)
        cout << "NO";
    return 0;
}
