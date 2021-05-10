/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
int a[15][15];
int main(){
    fast;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i][1] = a[1][i] = 1;
        for(int j = 2; j <= n; j++){
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    cout << a[n][n];
	return 0;
}
