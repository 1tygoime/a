#include <bits/stdc++.h>
using namespace std;

bool fibo(long long n){
    if (n == 1 || n == 2) return true;
    else{
        long long a1 = 1, a2 = 1, a3;
        while (a1 + a2 <= n){
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        if (a3 == n) return true;
        else return false;
    }
}

int main(){
    long long a[100][100],m,n,count(0);
    cin >> m >> n;
    for (long long i = 0; i < m; i++){
        for (long long j = 0; j < m; j++){
                cin >> a[i][j];
                if (fibo(a[i][j])) count++;
        }
    }
    cout << count;
    return 0;
}