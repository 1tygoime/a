#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt(0);
    double x,tong(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > 0){
            tong += x;
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "0.00";
    else{
        cout << setprecision(2) << fixed << tong/(1.0*cnt);
    }
    return 0;
}
