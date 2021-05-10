#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a[100005],tong(0),i(0);
    cin >> n >> m;
    for (long long i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= 0) a[i] = 0;
    }
    sort(a, a + n, greater <long long>());
    while (m > 0 && i < n){
        if (a[i] != 0){
                tong += a[i];
                m--;
                i++;
        }
        else{
                i++;
        }
    }
    cout << tong;
    return 0;
}