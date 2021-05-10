#include <bits/stdc++.h>
using namespace std;
#define FORU(i,a,b) for (long long i = a; i < b; i++)
int main(){
    long long N,a,mi(LONG_MAX),ma(LONG_MIN);
    cin >> N;
    FORU(i,0,N){
        cin >> a;
        ma = max(ma,a-mi);
        mi = min(mi,a);
    }
    cout << ma;
    return 0;
}
    