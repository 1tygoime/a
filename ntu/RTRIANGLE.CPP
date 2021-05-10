#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ll n;
    cin >> n;
    ll t = sqrt(2 * n);
    if (t * (t + 1) / 2 == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
    