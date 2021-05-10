 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a, b, c, d, s(0), res(1);
    cin >> n >> a >> b >> c >> d;
    s = a + b + c + d;
    for(n--; n--; ){
        cin >> a >> b >> c >> d;
        res += (a + b + c + d > s);
    }
    cout << res;    
    return 0;
}