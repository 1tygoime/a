#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int res, N, C, s;
vector <int> v;

void Try(int i){
    for(int j = 0; j <= 1; j++){
        s += j * v[i];
        if (i == N - 1){
            if (s <= C) res = max(res, s);
        }
        else Try(i + 1);
        s -= j * v[i];
    }
}

int main(){
    cin >> C >> N;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.pb(x);
    }
    Try(0);
    cout << res;
    return 0;
}
