#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool calc(int a, int b){
    return (1.0*max(a, b) / min (a, b) > 2);
}

void sol(){
    int n, cnt = 0;
    cin >> n;
    vector <int> a(n);
    for(int &i : a)
        cin >> i;
    for(int i = 0; i < n - 1; i++){
        if (calc(a[i], a[i + 1])){
            int x = max(a[i], a[i + 1]), y = min(a[i], a[i + 1]);
            while (y< x) y*= 2, cnt++;
            cnt--;
        }
    }
    cout << cnt << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
