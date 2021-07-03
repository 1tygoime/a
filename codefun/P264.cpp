#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[100005],b[100005],n,max;
    cin >> n;
    for (long long i = 0; i < n; i++) cin >> a[i];
    max = a[1]-a[0];
    for (long long i = 0; i < n-1; i++){
        if (max < a[i+1]-a[i]) max = a[i+1]-a[i];
    }
    for (long long i = 0; i < n-1; i++){
        if (max < a[i]-a[i+1]) max = a[i]-a[i+1];
    }
    cout << max;
    return 0;
}
