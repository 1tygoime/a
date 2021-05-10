#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,n1,a[100],b[100],c[100];
    cin >> n;
    for (long long i = 1; i <= n; i++){
            cin >> a[i];
            c[i] = a[i];
    }
    cin >> n1;
    for (long long i = 1; i <= n1; i++){
            cin >> b[i];
            c[n+i] = b[i];
    }
    for (long long i = 1; i < n+n1; i++){
            for (long long j = i + 1; j <= n + n1; j++){
                if (c[i] > c[j]){
                    long long temp = c[i];
                    c[i] = c[j];
                    c[j] = temp;
                }
            }
    }
    for (long long i = 1; i <= n+n1; i++)
            cout << c[i] << ' ';
    return 0;
}