#include <bits/stdc++.h>
using namespace std;
long long a[200005],x,res(0);
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    x=a[n/2];
    for (int i =1 ;i<=n;i++)
        res+=abs(a[i]-x);
    cout << res;
    return 0;
}
