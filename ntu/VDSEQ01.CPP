#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ll x, sum(0), ma(LLONG_MIN);
    int n;
    for(cin >> n; n--; ){
        cin >> x;
        sum += x;
        ma = max(ma, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << ma;
    return 0;
}
    