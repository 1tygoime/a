#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,a[1005],i1,j1;
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> a[i];
    long long ma = LLONG_MIN;
    for (long long i = 1; i < n; i++){
        for (long long j = i + 1; j <= n; j++)
            if (a[i]*a[j] > ma){
                ma = a[i]*a[j];
                i1=i;
                j1=j;
            }
    }
    cout << i1 << ' ' << j1;
    return 0;
}
