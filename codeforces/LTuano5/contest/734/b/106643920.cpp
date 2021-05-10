#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int cnt256 = min(k2, min(k5, k6)), cnt32 = min(k3, k2 - cnt256);

    cout << 32 * cnt32 + 256 * cnt256;

    return 0;
}
