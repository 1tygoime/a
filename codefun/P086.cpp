#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> a = {0};
vector <ll> uoc = {1};
int n;
bool chk;
ll sum;

bool check(ll divi, int cnt, int start){
    if (cnt == sum / divi) // chia day so thanh 'sum/divi' phan , tong moi phan = divi
        return 1;
    for(int i = start + 1; i <= n; i++)
        if(a[i] - a[start] == divi)
            return check(divi, cnt + 1, i); // tim diem chia tiep theo
    return 0;
}

int main(){
    cin >> n;

    for(int i = 0 ; i < n; i++){
        ll x;
        cin >> x;
        if (x) chk = 1;
        a.push_back(a.back() + x);
    }

    if (!chk){
        cout << n;
        return 0;
    }

    sum = a.back();

    for(ll i = 2; i * i <= sum; i++){
        if (sum % i == 0){
            if (sum / i != i)
                uoc.push_back(sum / i);
            uoc.push_back(i);
        }
    }

    sort(uoc.begin(), uoc.end());

    for(const ll &k : uoc){
        if (check(k, 0, 0)){
            cout << sum / k;
            return 0;
        }
    }

    cout << 1;

    return 0;
}
