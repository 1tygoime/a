#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()

int f1[100005], f2[100005], f3[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q, x;
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> x;
        f1[i] = f1[i - 1] + (x == 1);
        f2[i] = f2[i - 1] + (x == 2);
        f3[i] = f3[i - 1] + (x == 3);
    }
    while(q--){
        int y;
        cin >> x >> y;
        cout << f1[y] - f1[x - 1] << ' ' << f2[y] - f2[x - 1] << ' ' << f3[y] - f3[x - 1] << '\n';
    }
    return 0;
}
