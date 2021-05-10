/** LTo5 **/ // https://vn.spoj.com/problems/NKSGAME/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
vector <int> a, b;
int res = INT_MAX, n, x;

void method1(){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int L = 0, R = n - 1, tmp;
    while (L != n && R != -1){
        tmp = a[L] + b[R];
        res = min(res, abs(tmp));
        tmp < 0 ? L++ : R--;
    }
}
//vietcodes.github
void method2(){
    sort(a.begin(), a.end());
    for (const int &i : b){
        auto it = lower_bound(a.begin(), a.end(), -i);
        if (it != a.end())
            res = min(res, abs(i + *it));
        if (it != a.begin())
            res = min(res, abs(i + *(it - 1)));
    }
}

int main(){
    fast;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.pb(x);
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        b.pb(x);
    }
    method2();
    cout << res;
}
