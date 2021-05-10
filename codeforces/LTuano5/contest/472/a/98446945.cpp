#include <bits/stdc++.h>
using namespace std;
bool notprime(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i==0)
            return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n/2; i++)
        if(notprime(i)&&notprime(n-i)){
            cout<<i<<' ' << n-i;
            return 0;
        }
    return 0;
}
