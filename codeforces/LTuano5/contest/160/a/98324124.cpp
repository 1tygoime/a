#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000],s(0),cnt(0),x(0);
    cin>>n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s+=a[i];
    }
    sort(a,a+n);
    for(int i = n-1; i >= 0; i--){
        x+=a[i];
        s-=a[i];
        if(x>s){
            cout<<n-i;
            break;
        }
    }
    return 0;
}
