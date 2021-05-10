#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second

void sol(){
    //maximum subarray sum
    int n, ma(INT_MIN), x, s(0), cnt1(0);
    for(cin >> n; n--; ){
        cin >> x;
        if(x)
            cnt1++, s--;
        else s++;
        ma = max(ma, c);
        if (s < 0)
            s = 0;
    }
    if(!cnt1) s--;
    cout << s + m;
}

int main(){
    fast;
    int t;
    for(t = 1; t--; ){
        sol();
    }
    return 0;
}
