#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int n, res;
vector <int> a;
map <int, int> mp;

int pw2(int n){
    int res = 1;
    for(int i = 1; i <= n; i++) res *= 2;
    return res;
}

void copycode(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.pb(x);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 30; j++) res += mp[pw2(j) - a[i]];
        mp[a[i]]++;
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    copycode();

    return 0;
}
