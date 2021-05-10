#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol(int n){
    if((int)log10(n) + 1 < 4){
        cout << "NO\n";
        return;
    }
    for(int x = 0; x <= n / 2020; x++){
        if ((n - 2020 * x) % 2021 == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    for(cin >> T; T--; ){
        int n;
        cin >> n;
        sol(n);
    }
    return 0;
}
