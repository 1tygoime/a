#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll xu[50], tc, ma = -1;
map <ll, int> coin;
int n = 34, k = 20, x[50];

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;

        if (i == k){
            int cnt = 0; ll S = 0;

            for(int c = 1; c <= k; c++)
                cnt += x[c],
                S += x[c] * xu[c];

            if (coin.count(S)) coin[S] = max(coin[S], cnt);
            else coin[S] = cnt;
        } else Try(i + 1);
    }
}

void Try1(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;

        if (i == n){
            int cnt = 0; ll S = 0;

            for(int c = k + 1; c <= n; c++)
                cnt += x[c],
                S += x[c] * xu[c];

            if (coin.count(tc - S)) ma = max(ma, (ll)(cnt + coin[tc - S]));
        } else Try1(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    xu[1] = 2, xu[2] = 3, xu[3] = 5;
    for(int i = 4; i <= 35; i++)
        xu[i] = xu[i - 1] + xu[i - 2] + xu[i - 3];

    Try(1);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> tc;
        ma = -1;
        Try1(k + 1);
        cout << "Case #" << i << ": " << ma <<'\n';
    }

    return 0;
}
