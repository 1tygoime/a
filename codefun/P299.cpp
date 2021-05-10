#include <bits/stdc++.h>
using namespace std;

bool CheckSNT(long long n){
    if (n<2) return false;
    else{
        long long count(0);
        for (long long i = 2; i <= sqrt(n); i++)
            if (n % i == 0) count++;
        if (count == 0) return true;
        else return false;
    }
}

int main(){
    long long n,a[100005];
    cin >> n;
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++){
        bool isTrue = CheckSNT(a[i]);
        if (isTrue == true) cout << a[i];
    }
    return 0;
}