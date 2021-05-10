#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,x(0),y(0),z(0);
    cin >> n;
    while(n--){
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    cout<<((x==0&&y==0&&z==0)?"YES":"NO");
    return 0;
}
