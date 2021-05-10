#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int n, x, k, res;
vector <int> v;

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0, j = 0; i < n && j < n; ){
        if (v[j] - v[i] < k)
            j++;
        else if (v[j] - v[i] == k)
            res++, i++, j++;
        else
            i++;
    }
    cout << res;
    return 0;
}
    