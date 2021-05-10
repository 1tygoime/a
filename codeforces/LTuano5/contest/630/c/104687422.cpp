#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    ll res = 1;
    int n;
    cin >> n;
    for(int i = 1; i <= n + 1; i++)
        res *= 2LL;
    cout << res - 2;
    return 0;
}
