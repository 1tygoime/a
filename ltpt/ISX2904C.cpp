#include <bits/stdc++.h>
using namespace std;

struct t
{
    int x;
    int y;
};

t a[100005];
int n, tmp, k;

bool cmp(t a, t b)
{
    return (1.0 * a.x / a.y <= 1.0 * b.x / b.y);
}

void rg()
{
    for (int i = 0; i < n; i++)
    {
        int tmp = __gcd(a[i].x, a[i].y);
        a[i].x /= tmp;
        a[i].y /= tmp;
    }
}

int main()
{
    cin >> n >> k;
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
    rg();
    sort(a, a + n, cmp);
    //    for (int i = 0; i < n; i ++)
    //        cout << a[i].x << ' ' << a[i].y <<'\n';
    k--;
    ////    rg();
    cout << a[k].x << ' ' << a[k].y;
    return 0;
}
