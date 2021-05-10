#include<bits/stdc++.h>
using namespace std;

long long dayso(long long n)
{
    if (n == 0 || n == 1) return 1;
    else{
    long long a0 = 1, a1 = 1, i = 2, a2;
    while (i <= n){
        a2 = 2 * a1 - a0;
        a0 = a1;
        a1 = a2;
        i++;
    }
    return a2;
    }
}

int main()
{
    long long nInput;
    cin >> nInput;
    cout << dayso(nInput);
    return 0;
}