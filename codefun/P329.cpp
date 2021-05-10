#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,count(0);
    cin >> n;
    for (long long i = 0; i <= n; i++){
        if (n - i >= 0) count++;
    }
    cout << count;
    return 0;
}