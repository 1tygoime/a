/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nmax 1005

int main(){
    fast
    cin >> n;
    for(int i = 1; i <= n; i++){
        s += (2*i-1);
    }
    cout << s*2 - 2*n + 1;
    return 0;
}
