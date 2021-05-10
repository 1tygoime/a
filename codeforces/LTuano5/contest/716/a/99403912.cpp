/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll n,c,a[100005];
int res;

int main(){
    fast
    cin >> n >> c;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        res = (a[i] - a[i-1] > c ? 0 : res);
        res++;
    }
    cout << res;
    return 0;
}
