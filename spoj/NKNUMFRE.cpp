#include <bits/stdc++.h>
using namespace std;

int rev(int n){
    int res(0);
    while(n){
        res=res*10+n%10;
        n/=10;
    }
    return res;
}

int main(){
    int a,b,cnt(0);
    cin>>a>>b;
    for (int i = a; i <= b; i++)
        if(__gcd(i,rev(i))==1)
            cnt++;
    cout<<cnt;
    return 0;
}
/* LTo5 */
