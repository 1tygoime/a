/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
int lucky[] = {4,7,47,74,44,444,447,474,477,777,774,744};
int n;
int main(){
    cin >> n;
    for (auto &c:lucky)
        if(n%c==0){
            cout<<"YES";
            return 0;
        }
    cout << "NO";
    return 0;
}
