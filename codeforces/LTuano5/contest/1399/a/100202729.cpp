/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a[100],n,t;

void prod(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n-1; i++){
        if (abs(a[i]-a[i+1])>1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    fast
    for (cin >> t; t--; ){
        prod();
    }
    return 0;
}
