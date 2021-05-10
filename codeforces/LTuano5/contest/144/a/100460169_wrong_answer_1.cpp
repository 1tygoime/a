/// your code goes here
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,imin,imax,ma=INT_MIN,mi=INT_MAX,i=0;
    for(cin >> n; i < n; ++i){
        cin >> x;
        if(x>ma) { ma  = x; imax=i;}
        if(x < mi) { mi = x; imin=i;}
    }
    cout << imax+n-imin-1-(imax>imin);
    return 0;
}