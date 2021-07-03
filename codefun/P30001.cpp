#include <bits/stdc++.h>
using namespace std;

bool nt(long long n){
    if (n < 2) return false;
    else{
        long long count(0);
        for (long long i = 2; i <= sqrt(n); i++){
            if (n%i == 0){
                count++;
                break;
            }
        }
        if (count == 0) return true;
        else return false;
    }
}

int main(){
    long long a[100][100],m,n,count(0);
    cin >> m >> n;
    for (long long i = m+1; i < n; i++){
        if (nt(i)) count++;
    }
    cout << count;
    return 0;
}

