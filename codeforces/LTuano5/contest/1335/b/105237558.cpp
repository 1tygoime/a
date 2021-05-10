#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
//ans = 1,2.....,b,1,2,....,b
int main(){
    int T;
    for(cin >> T; T--; ){
        int n, a, b;
        cin >> n >> a >> b;
        for(int i = 0; i < n; i++){
            cout << char('a' + i % b);
        }
        cout << '\n';
    }
    return 0;
}
