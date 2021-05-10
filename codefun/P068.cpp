#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull d[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int cs(ull n){
     if (n < 10)
        return d[n];
    if (((n/10)%10)%2 == 0)
        return (6*cs(n/5)*d[n%10]) % 10;
    else
        return (4*cs(n/5)*d[n%10]) % 10;
}

int main()
{
    ull n;
    cin >> n;
    cout << cs(n);
    return 0;
}
