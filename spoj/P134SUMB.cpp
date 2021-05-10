/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    ll g, y, cd, cr;
    cin >> g >> y;
    ll delta = (g+4)*(g+4)/4 - 4 * (g + y);
    cd = ((g+4)/2 + sqrt(delta))/2;
    cr = ((g+4)/2 - sqrt(delta))/2;
    if (cd > cr) swap(cd,cr);
    cout << cd << ' ' << cr;
    return 0;
}
