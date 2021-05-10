#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

void prod(){
    int s, res = 0, p = 1000000000;
    cin >> s;

    while(s){
        while(s < p) p /= 10;
        s -= p - p / 10;
        res += p;
    }

    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--;)
        prod();

    return 0;
}
