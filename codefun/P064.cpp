#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,count(0);
    cin >> n;
    while (n > 0){
        count += 1;
        n /= 10;
    }
    cout << count;
    return 0;
}