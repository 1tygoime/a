#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sum = 0;
    cin >> n;
    vector <int> a(n);
    for(int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    for(int i = 0; n > 1&& a[i] <= n - 1; i++){
        sum += a[i];
        n -= (a[i] + 1);
    }

    // Thua doan cuoi
    cout << sum + n - 1;

    return 0;
}
