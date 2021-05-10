#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,count(0);
    cin >> n;
    for (long long i = 2; i <= n; i++)
        if (n%i == 0){
                cout << i - 1;
                break;
        }
    return 0;
}