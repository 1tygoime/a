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
    int a[5],res(0);
    string s;
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> s;
    for(auto &c:s){
        res+=a[c-'0'];
    }
    cout<<res;
    return 0;
}
