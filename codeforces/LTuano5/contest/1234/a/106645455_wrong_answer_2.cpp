#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--;){
        int n, x, sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            sum += x;
        }
        cout << ceil(1.0 * sum / n) << '\n';
    }

    return 0;
}
