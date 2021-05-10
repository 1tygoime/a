#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,s(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        s+=x;
    }
    long double res=1.0*s/n;
    cout << res;
    return 0;
}
