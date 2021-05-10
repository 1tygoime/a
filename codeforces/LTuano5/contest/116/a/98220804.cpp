#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,res(0),s(0);
    cin >> n;
    while(n--){
        cin >> x >> y;
        s=s-x+y;
        res=max(res,s);
    }
    cout<<res;
    return 0;
}
