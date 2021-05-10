#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,cnt(0);
    cin >> n;
    for (unsigned long long i = 1; i <= n; i++){
        if (n % i == 0)
        	cnt ++;
    }
    cout << cnt;
    return 0;
}