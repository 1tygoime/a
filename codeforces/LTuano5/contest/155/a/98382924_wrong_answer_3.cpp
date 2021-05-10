#include <bits/stdc++.h>
using namespace std;
int a[1005],n,cnt(0);
int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        if(a[i]>a[i-1])
            cnt++;
    cout<<cnt;
    return 0;
}
