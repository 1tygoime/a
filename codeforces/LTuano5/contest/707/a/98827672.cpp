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
    int n,m;
    char c;
    cin >> n >> m;
    n*=m;
    for (int i = 0; i < n; i++){
        cin >> c;
        if(c=='Y'||c=='M'||c=='C'){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
    return 0;
}
