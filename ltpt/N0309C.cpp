#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long dayso(long long n)
{
    if (n==1 || n == 2)
        return 1;
    long long a1 = 1, a2 = 1, i = 3, a3;
    while (i <= n){
        a3 = (3*a2 - a1+mod)%mod;
        a1 = a2;
        a2 = a3;
        i++;
    }
    return a3;
}

int main()
{
    long long n;
    cin >> n;
    cout << dayso(n);
    return 0;
}
