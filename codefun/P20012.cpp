#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,count(0);
    cin >> n;
    bool isPrime[n+1];
    for (long long i = 0; i <= n; i++) isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    for (long long i = 2; i <= sqrt(n); i++){
        if (isPrime[i] == true){
            for(long long j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (long long i = 0; i < n; i++)
        if (isPrime[i] == true) count++;
    cout << count;
    return 0;
}