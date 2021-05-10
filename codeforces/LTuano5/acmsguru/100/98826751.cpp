/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int res(0);
    for(int i = 1; i <= d; i++)
        if(!(i%k) || !(i%l) || !(i%m) || !(i%n))
            res++;
    cout<<res;
}
