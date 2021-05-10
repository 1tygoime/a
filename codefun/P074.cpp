#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        if (sqrt(i) == (long long)sqrt(i)) tong++;
    }
    cout << tong;
    return 0;
}