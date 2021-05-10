#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,count(0);
    cin >> n;
    for (long long i = 1; i <= n; i++){
        long long a,b,c;
        cin >> a >> b >> c;
        if (a + b > c && b + c > a && c + a > b) count++;
    }
    cout << count;
    return 0;
}