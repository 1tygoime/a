#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <int> a;

void copycode(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.pb(x);
    }
    int ma = 1, cnt = 1;
    for(int i = 0; i < n - 1; i++){
        if (a[i] < a[i + 1]) cnt++;
        else ma = max(ma, cnt), cnt = 1;
    }
    cout << max(ma, cnt);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    copycode();

    return 0;
}
