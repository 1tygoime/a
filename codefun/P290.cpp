#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,a[100005];
    cin >> n;
    for (long long i = 0; i < n; i++) cin >> a[i];
    bool flag = true;
    for (long long i = 0; i < n - 1; i++){
        if (a[i] > a[i+1]){
            flag = false;
            break;
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
    return 0;
}