/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int nmax = 1e6 + 5;
bool prime[nmax];
void sieve(){
    for (int i = 2; i <= nmax; i++)
        prime[i] = 1;
    for (int i = 2; i * i <= nmax; i++){
        if (prime[i]){
            for (int j = i * i; j <= nmax; j+=i)
                prime[j] = 0;
        }
    }
}

int main(){
    fast
    sieve();
    int t,a,b,cnt;
    for (cin >> t; t--; ){
        cin >> a >> b;
        cnt=0;
        for (; a + 6 <= b; a++){
            cnt += (prime[a] && prime[a+6]);
        }
        cout << cnt << '\n';
    }
    return 0;
}
