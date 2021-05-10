#include<bits/stdc++.h>
using namespace std;

int n, a, b, res(INT_MAX);
vector < pair <int, int> > v;
int cTu[300005], cTr[300005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    v.resize(n);
    for(auto &c: v){
        cin >> c.first >> c.second;
    }
    sort(v.begin(), v.end());
    cTu[0] = (v[0].second == 1);
    cTr[0] = (v[0].second == 2);
    for(int i = 1; i < n; i++){
        cTu[i] = cTu[i - 1] + (v[i].second == 1);
        cTr[i] = cTr[i - 1] + (v[i].second == 2);
    }
    for(int i = 0; i < n; i++){
        if (cTu[i] < a || cTr[i] < b) continue;
        int L = 0, R = i, t = i;
        while (L <= R){
            int M = (L + R) / 2;
            if (cTu[i] - cTu[M - 1] >= a && cTr[i] - cTr[M - 1] >= b)
                t = M, L = M + 1;
            else R = M - 1;
        }
        res = min(res, v[i].first - v[t].first);
    }
    cout<<(res==INT_MAX?-1:res);
    return 0;
}
