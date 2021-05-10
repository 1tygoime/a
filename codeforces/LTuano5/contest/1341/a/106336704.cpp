#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ull fibo[500], n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--; ){
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        cout << (n * (a + b) < c - d || c + d < n * (a - b) ? "No\n" : "Yes\n");
    }

    return 0;
}
