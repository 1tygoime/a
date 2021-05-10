#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long a[100005],tich(1);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        tich *= (a[i]%10);
    }
    cout << abs(tich)%10;
    return 0;
}
