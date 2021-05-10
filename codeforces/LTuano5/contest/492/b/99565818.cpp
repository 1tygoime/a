/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nmax 1005
int main(){
	int n, l;
	ll ma(LLONG_MIN),a[nmax];
	cin >> n >> l;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	ma = a[0] * 2;
	for(int i = 1; i < n; i++)
        ma = max(ma, a[i] - a[i-1]);
    ma = (a[n-1]!= l ? max((l - a[n-1])*2,ma) : ma);
    cout << setprecision(10) << fixed << ma / 2.0;
}
