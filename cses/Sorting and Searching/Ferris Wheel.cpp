#include <bits/stdc++.h>
using namespace std;
long long a[200005],x,ans(0);
int n;

int main(){
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0,j=n-1;i<n;i++){
        while(i < j && a[i]+a[j]>x)
            j--;
        if (i>=j)
            break;
        ans++;
        j--;
    }
    cout<<n-ans;
    return 0;
}
