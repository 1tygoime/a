#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int n;
vector <ll> a, s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = max(3 * a/10, a- a / 250 * c), v = max(3* b / 10, b - b / 250 * d);

    if (m == v) cout << "Tie";
    else cout << (m > v ?"Misha":"Vasya");
    return 0;
}
