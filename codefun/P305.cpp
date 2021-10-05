#include <bits/stdc++.h>
using namespace std;

void Xoa(long long a[], long long &n, long long location)
{
    for (long long i = location + 1; i < n; i++)
        a[i - 1] = a[i];
    n--;
}

void Trung(long long a[], long long &n)
{
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                Xoa(a, n, j);
                j--;
            }
        }
    }
}

int main()
{
    long long a[100005], n;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    Trung(a, n);
    sort(a, a + n);
    for (long long i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
