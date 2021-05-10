#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n, k, res = 0;
    vector <int> v;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.pb(x);
    }

    for(const int &c : v){
        if (5 - c >= k)
            res++;
    }

    cout << res / 3;

    return 0;
}
