#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void sol(){
    int n, a[3], cnt = 0;
    memset(a, 0, sizeof(a));
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[x % 3]++;
    }
    while(*min_element(a, a + 3) != n / 3){
        for(int i = 0; i < 3; i++){
            if (a[i] > n / 3){
                cnt++;
                a[i]--;
                a[(i + 1) % 3]++;
            }
        }
    }
    cout<<cnt<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
