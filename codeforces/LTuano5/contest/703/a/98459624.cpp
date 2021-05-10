#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,m(0),c(0);
    for(cin >> n; n--; ){
        cin >> x >> y;
        if(x>y)
            m++;
        if(x<y)
            c++;
    }
    if (m>c)
        cout<<"Mishka";
    else
        cout << (m<c?"Chris":"Friendship is magic!^^");
    return 0;
}
