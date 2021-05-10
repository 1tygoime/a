/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int a, b; cin >> a >> b;
    cout << min (a,b) << ' ' << abs(a-b)/2;
    return 0;
}
