#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,tong(0);
    cin >> n;
    while (n > 0){
        tong += n%10;
        n /= 10;
    }
    cout << tong;
    return 0;
}