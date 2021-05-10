/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool isP(int n){
    for(int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return (n > 1);
}

int main() {
    fast
    int n,m;
    cin >> n >> m;
    if(!isP(m)){
        cout << "NO";
        return 0;
    }
    ++n;
    for (int i = n; i < m; i++){
        if (isP(i)){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
	return 0;
}
