#include <bits/stdc++.h>
using namespace std;

bool SoMayMan (long long n){
    if (n < 0) return false;
    if (n == 0) return true;
    else{
            long long tong(0);
            long long temp = n;
            while (n > 0){
                tong += n%10;
                n /= 10;
            }
            if (temp % tong == 0) return true;
            else return false;
    }
}

int main(){
    long long n,count(0),a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        }
    for (long long i = 1; i <= 5; i++)         if (SoMayMan(a[i])) count++;
    cout << count;
    return 0;
}