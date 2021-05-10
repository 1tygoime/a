#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[100005],n,tong(0),count(0);
    cin >> n;
    for (long long i = 0; i < n; i++){
            cin >> a[i];
            if (i % 2 == 0){
                    count++;
                    tong += a[i];
            }
    }
    cout << setprecision(2) << fixed << tong/(double)count;
    return 0;
}
