#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol(string s){
    if(s.size() < 4){
        cout << "NO\n";
        return;
    }
    if(s.back() != '1' && (s[s.size() - 2] % 2))
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    for(cin >> T; T--; ){
        string n;
        cin >> n;
        sol(n);
    }
    return 0;
}
