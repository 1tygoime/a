#include <bits/stdc++.h>
using namespace std;

bool KiemTraSNT(long long n){
    if (n < 2) return false;
    else{
        long long count(0);
        for (long long i = 2; i <= sqrt(n); i++){
            if (n % i == 0) count++;
        }
        if (count == 0) return true;
        else return false;
    }
}

int main(){
    long long n;
    cin >> n;
    for (long long i = n; i >= 1; i--){
        bool isTrue = KiemTraSNT(i);
        if (isTrue == true){
            cout << i;
            break;
        }
    }
    return 0;
}