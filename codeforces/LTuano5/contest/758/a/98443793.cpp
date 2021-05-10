#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[105],n,ma(INT_MIN);
    long long res(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        ma=max(ma,a[i]);
    }
    for(int i = 0; i < n; i++)
        res+=ma-a[i];
    cout << res;
    return 0;
}