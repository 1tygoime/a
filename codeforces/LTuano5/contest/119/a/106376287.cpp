/// Chep sol

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int a, b, n, k;

void copycode(){
    cin >> a >> b >> n;
    while (n >= 0){
        n -= __gcd((++k % 2) ? a : b, n);
    }
    cout << k % 2;
}

int main(){
    int T;
    copycode();
}
