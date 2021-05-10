// su dung bao ham loai tru
// dem so so co it nhat 1 uoc chung voi x trong [1,k] = cnt => res = k - cnt

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <ll> factor;
int np[25];
bool c;
ll k, x, xx, cnt;

void prod(){
    ll mul = 1;
    vector <ll> ftmp;
    for(int i = 0; i < factor.size(); i++)
        if (np[i]) {c = 1; ftmp.pb(factor[i]);}
    if(!c) return;
    for(const ll &i: ftmp) {mul *= i;}
    if (ftmp.size() % 2) cnt += k / mul;
    else cnt -= k / mul;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        np[i] = j;
        if (i == factor.size() - 1) prod();
        else Try(i + 1);
    }
}

int main(){
    cin >> x >> k;
    if(x == 1){
        cout << k;
        return 0;
    }
    xx = x;
    for(ll i = 2; i * i <= xx; i++)
        if(xx % i == 0){
            factor.pb(i);
            while(xx % i == 0) xx /= i;
        }
    if (xx > 1) factor.pb(xx);
    Try(0);
    cout << k - cnt;
}
