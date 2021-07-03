#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x0,y0,xm,ym,r;
    cin >> x0 >> y0 >> xm >> ym >> r;
    long double OM = sqrt((xm-x0)*(xm-x0)+(ym-y0)*(ym-y0));
    if (OM <= r) cout << "YES";
    else cout << "NO";
    return 0;
}
