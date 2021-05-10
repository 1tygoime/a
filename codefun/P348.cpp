#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n == 0 || n == 1 || n == 2) cout << 1;
    else{
        long long a1 = 0, a2 = 1, a3 = 1, a4, i = 3;
        while (i <= n){
            a4 = a1 + a2 + a3;
            a1 = a2;
            a2 = a3;
            a3 = a4;
            i++;
        }
        cout << a4;
    }
    return 0;
}