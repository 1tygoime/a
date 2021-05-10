/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    int t,a,b;
    for (cin >> t; t--; ){
        cin >> a >> b;
        int tmp = abs(a-b)%10;
        cout << (tmp ? abs(a-b)/10+1 : abs(a-b)/10) << '\n';
    }
    return 0;
}
