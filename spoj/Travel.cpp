#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll a[50], S, res;
int x[50];
map <ll, ll> X;
int n, k;

void out1(){
    ll s = 0;
    for(int i = 1; i <= k; i++)
        if(x[i]) s += a[i];
    X[s]++;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == k)
            out1();
        else
            Try(i + 1);
    }
}

void out2(){
    ll tmp = 0;
    for(int i = k + 1; i <= n; i++){
        if (x[i]) tmp += a[i];
    }
    if (X.count(S - tmp)){
        res += X[S - tmp];
    }
}

void Try2(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == n) out2();
        else Try2(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    freopen("Travel.inp", "r", stdin);
    freopen("Travel.out", "w", stdout);

    cin >> n >> S;
    k = n / 2;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    Try(1);
    Try2(k + 1);

    cout << res;
    return 0;
}
