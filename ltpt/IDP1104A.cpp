#include <bits/stdc++.h>
using namespace std;

long long a[100005];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    int q;
    cin >> q;
    while (q--){
        int p;
        cin >> p;
        cout << a[p] << '\n';
    }
    return 0;
}
