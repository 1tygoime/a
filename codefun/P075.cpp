#include<bits/stdc++.h>
using namespace std;

bool KiemTraSNT(unsigned long long n){
    if (n < 2) return false;
    else{
        long long dem(0);
        for (unsigned long long i = 2; i <= sqrt(n); i++){
            if (n % i == 0) dem++;
        }
        if (dem == 0) return true;
        else return false;
    }
}

int main(){
    unsigned long long n,count(0);
    cin >> n;
    for (unsigned long long i = 1; i <= n; i++){
        bool isTrue = KiemTraSNT(i);
        if (isTrue == true) count++;
    }
    cout << count;
    return 0;
}
