/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nmax 1005

int main(){
    fast
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a,a+4);
    cout << (a[0]+a[3] == a[1] + a[2] || a[0]+a[1]+a[2] == a[3] ? "YES" : "NO");

    return 0;
}
