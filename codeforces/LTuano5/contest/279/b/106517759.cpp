#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int n, t, res;
vector <int> a;

void copycode(){
    cin >> n >> t;
    a.resize(n);
    for(int &i : a)
        cin >> i;
    int curr = 0, sum = 0;
    for(int L = 0, R = 0; R < n; R++){
        sum += a[R];
        curr++;
        while(sum > t){
            sum -= a[L++];
            curr--;
        }
        res = max(res, curr);
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
