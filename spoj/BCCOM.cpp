/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int t; ll n;
    for(cin >> t; t--; ){
        cin >> n;
        cout << (n % 9 ? n % 9 : 9) << '\n';
    }
    return 0;
}
