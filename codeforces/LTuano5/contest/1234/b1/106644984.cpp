#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;

    for(cin >> n >> k; n--; ){
        int id;
        cin >> id;
        if (find(v.begin(), v.end(), id) == v.end()){
            if(v.size() >= k) v.pop_back();
            v.insert(v.begin(), id);
        }
    }

    cout << v.size() << '\n';
    for(const auto &i : v) cout << i << ' ';

    return 0;
}
