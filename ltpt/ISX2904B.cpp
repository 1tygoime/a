#include <bits/stdc++.h>
using namespace std;

struct t
{
    int x;
    int y;
};

t a[100005];
int n, tmp;

bool cmp(t a, t b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y > b.y;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a[i].x = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a[i].y = tmp;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        cout << a[i].x << ' ' << a[i].y << '\n';
    return 0;
}
