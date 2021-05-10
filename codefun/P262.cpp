#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,max(0),a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    max = a[1];
    for (long long i = 1; i <= n; i++){
        if (max < a[i]) max = a[i];
    }
    cout << max;
    return 0;
}