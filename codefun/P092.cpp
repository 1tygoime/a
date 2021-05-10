#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[1000], n, count(0), count1(0);
    cin >> n;
    for (long long i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > 0) count++;
        else count1++;
    }
    if (count == n || count1 == n) cout << 0;
    else{
        long long max = 1, dem=1;
        for (long long i = 0; i < n; i++){
            if ((a[i] > 0 && a[i+1] < 0) || (a[i] < 0 && a[i+1] > 0)) dem++;
            else{
                if (max <= dem) max = dem;
                dem = 1;
            }
        }
        cout << max;
    }
    return 0;
}
