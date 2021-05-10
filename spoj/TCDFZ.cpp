/* LTo5 */
/* Toi di chep tai:
http://math.stackexchange.com/questions/130352/last-non-zero-digit-of-a-factorial
*/
#include <bits/stdc++.h>
using namespace std;
#define nmax 2000005
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int last[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int res(int n){
    if (n < 10) return last[n];
    return (((n/10)%10)%2 ? (4*res(n/5)*last[n%10]) % 10 : (6*res(n/5)*last[n%10]) % 10);
}

int main(){
    fast
    int n; cin >> n;
    cout << res(n);
    return 0;
}

