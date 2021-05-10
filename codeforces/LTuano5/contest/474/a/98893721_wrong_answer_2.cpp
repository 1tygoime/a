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
    const string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;string s1;
    cin >> c >> s1;
    for (auto &c:s1)
        c=s[s.find(c)+(c=='L'?1:-1)];
    cout<<s1;
}
