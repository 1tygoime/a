#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n, a[MAX], cnt(0);
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i]%2)
            cnt++;
    }
    if (cnt == n){
        cout<<n<<'\n';
        for(int i = 1; i <= n; i++)
            cout<<a[i]<<' ';
    }
    else if (cnt==0) cout<<0;
    else{
        ll ma(1),c(1),dem(1);
        for (ll i = 2; i <= n + 1; i++){
            if (a[i] % 2 && a[i-1] % 2)
                dem++;
            else{
                    // Xuat vi tri dau tien thi dung dau < , con xuat vi tri cuoi thi dung <=
                if (ma < dem){
                    ma = dem;
                    c = i-1;
                }
                dem = 1;
            }
        }
        cout << ma << endl;
        for (ll i = c - ma + 1; i <= c; i++)
            cout << a[i] << ' ';
    }
    return 0;
}
    