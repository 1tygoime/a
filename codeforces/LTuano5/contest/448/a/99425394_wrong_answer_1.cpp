/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int a1,a2,a3,b1,b2,b3,n;

int main(){
    fast
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int cups = ceil((a1+a2+a3)/5.0);
    int medals = ceil((b1+b2+b3)/5.0);
    cout << (cups + medals > n ? "NO" : "YES");
    return 0;
}
