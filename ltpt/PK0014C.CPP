#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int n;
    for (cin >> n; n--;)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (sz(v) % 2)
        cout << v[sz(v) / 2];
    else
        cout << v[sz(v) / 2 - 1];
    return 0;
}
