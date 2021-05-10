#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll k, sum;
map <ll, int> seen;
int n, res(INT_MIN);
vector <ll> v;

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        v.pb(x);
    }
//    seen[0] = 0;
    for(int i = 0; i < n; i++){
        sum = (sum % k + v[i] % k) % k;
        if(v[i] == 0)
            res = max(res, 1);
        if(sum == 0)
            res = max(res, i + 1);
        if (seen.count(sum))
            res = max(res, i - seen[sum]);
        else
            seen[sum] = i;
    }
    cout << res;
    return 0;
}
    