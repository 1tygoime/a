#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,dem(0),digit(0);
    cin >> n;
    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0) dem++;
    }
    if (dem == 0){
        while (n > 0){
            digit++;
            n /= 10;
        }
        cout << "Good" << '\n' << digit;
    }
    else cout << "Bad";
    return 0;
}