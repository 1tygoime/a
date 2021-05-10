#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int t;
ull n;

void calc(){
    ull t1=2,m1=n+1;
    ull tmp=__gcd(t1,m1);
    t1/=tmp,m1/=tmp;
    t1=2*m1-t1;
    tmp=__gcd(t1,m1);
    t1/=tmp,m1/=tmp;
    cout << t1 << ' ' << m1;
}

int main(){
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n;
        if (n == 1)
            cout << "1 1";
        else{
            calc();
        }
        if (i < t)
            cout << '\n';
    }
    return 0;
}
