#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long
#define pii pair <ll, ll>

int n;
ll M, res;
vector <pii> v, v1;
pii a[50];

void Try(int i, int sz, ll sum_w, ll val, vector <pii> &weight){
    if(sum_w > M) return;
    if(i >= sz){
        weight.push_back({sum_w, val});
        return;
    }
    Try(i + 1, sz, sum_w, val, weight);
    Try(i + 1, sz, sum_w + a[i].first, val + a[i].second, weight);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> M;
    int k = n / 2;
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    Try(0, k, 0, 0, v);
    Try(k, n, 0, 0, v1);

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    ll best = 0;
    for(int i = v.size() - 1, j = 0; i >= 0; i--){
        while(j < (int)v1.size() && v[i].first + v1[j].first <= M)
            best = max(best, v1[j].second),
            j++;
        res = max(res, v[i].second + best);
    }

    cout << res;
}
