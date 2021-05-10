#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[1000], n;
    cin >> n;
    for (long long i = 0; i < n; i++) cin >> a[i];
    long long max = 1, dem=1;
    for (long long i = 0; i < n; i++){
        if (a[i] == a[i+1]) dem++;
        else{
            if (max <= dem) max = dem;
            dem = 1;
        }
    }
    cout << max;
    return 0;
}