/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t,n,x,res,s;
//const int nmax = 1e2+5;
int main() {
    fast
    for(cin >> t; t--; ){
        res=s=0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x == 0){
                res++;
                x++;
            }
            s += x;
        }
        res += (s==0);
        cout << res << (t > 0 ? "\n" : "");
    }
	return 0;
}