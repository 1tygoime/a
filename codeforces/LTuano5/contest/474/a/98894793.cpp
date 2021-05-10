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
    string right = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string s;
    cin >> c >> s;
    for(int i = 0; i < s.size(); i++)
        s[i] = right[right.find(s[i])+(c=='R'?-1:1)];
    cout << s;
}
