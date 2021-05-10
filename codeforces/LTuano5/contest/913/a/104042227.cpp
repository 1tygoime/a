#include <bits/stdc++.h>
using namespace std;

// x % y = x if x < y

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    if (n >= 27) cout << m;
    else{
        int mod(1);
        for(int i = 1; i <= n; i++)
            mod *= 2;
        cout << m % mod;
    }

    return 0;
}
