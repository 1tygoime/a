#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i < n; i++){
        cout << i*(i+1)/2 << '\n';
    }
    cout << n*(n+1)/2;
    return 0;
}