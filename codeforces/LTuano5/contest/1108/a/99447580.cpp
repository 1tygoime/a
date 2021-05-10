/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t,x,y,a,b;

int main(){
    fast
    for (cin >> t; t--; ){
        cin >> x >> y >> a >> b;
        cout << x << ' ' << a + (x == a) << '\n';

    }
    return 0;
}
