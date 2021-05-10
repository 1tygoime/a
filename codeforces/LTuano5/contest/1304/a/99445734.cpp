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
        cout << ((y-x)%(a+b)?-1:(y-x)/(a+b)) << (t > 0 ? "\n" : "");
    }
    return 0;
}
