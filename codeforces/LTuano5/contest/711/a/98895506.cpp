/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/

#include <bits/stdc++.h>
using namespace std;
string s[1005];
int n;
bool check,check1;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(!check1&&(int)s[i].find("OO") >= 0){
            check=true;
            s[i].replace(s[i].find("OO"),2,"++");
            check1=true;
        }
    }
    if (check){
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << s[i] << '\n';
    }
    else cout << "NO";
}
