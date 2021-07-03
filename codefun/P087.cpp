#include <bits/stdc++.h>
using namespace std;

string fibo(long long n){
    if (n == 1) return "A";
    else if (n == 2) return "B";
    else return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
