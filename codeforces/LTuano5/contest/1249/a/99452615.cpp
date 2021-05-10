/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int n, a[105];

void sol(){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for (int i = 1; i < n; i++){
        /* neu ton tai 1 cap hon nhau 1, tach 1 nguoi sang nhom 2 */
        if (a[i] - a[i-1] == 1){
            cout << 2;
            return;
        }
    }
    cout << 1;
}

int main(){
    fast
    int t;
    for (cin >> t; t--; ){
        sol();
        cout << '\n';
    }
    return 0;
}
