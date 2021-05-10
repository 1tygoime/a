#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,a[100],q,count(0),c[100];
    int b[100];
    cin >> n >> p;
    for (long long i = 1; i <= p; i++) cin >> a[i];
    cin >> q;
    for (long long i = 1; i <= q; i++) cin >> c[i];
    for (long long i = 1; i <= 100; i++) b[i] = 0;
    for (long long i = 1; i <= p; i++){
        b[a[i]] = 1;
    }
    for (long long i = 1; i <= q; i++){
        b[c[i]] = 1;
    }
    for (long long i = 1; i <= 100; i++)
        if (b[i] == 1) count++;
    if (count == n) cout << "WIN";
    else cout << "LOSE";
    return 0;
}
