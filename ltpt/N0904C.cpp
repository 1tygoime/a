#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct hs
{
    string name;
    int math;
    int it;
    int total;
};

hs a[100005];
int n;
bool cmp(hs a, hs b)
{
    if (a.name != b.name)
        return a.name < b.name;
    if (a.total != b.total)
        return a.total < b.total;
    return a.math < b.math;
}
void gen()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].math >> a[i].it;
        a[i].total = a[i].math + a[i].it;
    }
    sort(a, a + n, cmp);
}

int main()
{
    gen();
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << ' ' << a[i].math << ' ' << a[i].it << '\n';
    }
}
