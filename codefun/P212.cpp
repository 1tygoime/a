#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    long double n,m;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++) n*= (100 + m)/100;
    cout << (long long)trunc(n);
    return 0;
}
