/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int sdigit(int n){
    int res(0);
    for(;n>0;res+=n%10,n/=10){}
    return res;
}

int main() {
    fast
    int n;
    for(cin >> n; sdigit(n)%4; n++){}
    cout << n;
	return 0;
}

