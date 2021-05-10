#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void sol(){
    memset(cnt, 0, sizeof(cnt));
    int n;
    cin >> n;
    int a[n];
    for(int &i : a)
        cin >> i;
    for(int i = 0; i < n; i++){
        for(int j = i + 2; j < n; j++)
            if (a[i] == a[j]){
                cout << "YES\n";
                return;
            }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    system("pause");
    return 0;
}
