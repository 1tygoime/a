#include<bits/stdc++.h>
using namespace std;

long long C(long long k, long long n){
    if (k == 0 || k == n) return 1;
    else if (k == 1) return n;
    else return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++){
        for (int j = 0; j <= i; j++)
        cout << C(j,i) << ' ';
    cout << endl;
    }
    return 0;
}