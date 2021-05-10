
#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n;
    cin >> n;
    for (unsigned long long i = n; i <= 10000005; i++){
        if (sqrt(i) == (unsigned long long)sqrt(i)){
            cout << i;
            break;
        }
    }
    return 0;
}