#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void sol(){
    int n, x;
    cin >> n >> x;
    if (n <= 2){
        cout << "1\n";
        return;
    }
    cout << (n - 3) / x + 2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    for(cin >> t; t--;)
        sol();

    return 0;
}
