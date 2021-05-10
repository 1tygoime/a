#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a[500];
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++)
        a[i] = i + 1;
    n--;
    while (n > 0){
        for (int i = 0; i < n; i++)
            a[i]=(a[i] + a[i+1])%1000000000;
        n--;
    }
    cout << a[0];
}
