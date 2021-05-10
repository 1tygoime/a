#include <bits/stdc++.h>
using namespace std;

bool KiemTraSNT(long long n){
    if (n < 2) return false;
    else{
        long long count(0);
        for (long long i = 2; i <= sqrt(n); i++){
            if (n%i == 0) count++;}
        if (count == 0) return true;
        else return false;
    }
}

int main(){
    long long n,m,a[100005];
    cin >> n >> m;
    for (long long i = 1; i <= m; i++)
        cin >> a[i];
    for (long long i = 1; i <= m; i++){
        bool isTrue = KiemTraSNT(a[i]);
        if (n % a[i] == 0 && isTrue == true) cout << "YES \n";
        else cout << "NO \n";
    }
    return 0;
}