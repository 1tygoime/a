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
    int cnt(0);
    string s;
    cin >> s;
    // chi thay doi khi toan bo chu hoa, hoac chi co chu dau thuong
    // kiem tra xem co vi pham 2 TH ko
    for (int i = 1; i < s.size(); i++)
        if(islower(s[i])){
            cout<<s;
            return 0;
        }
    // ko vi pham, xu ly
    for (int i = 0; i < s.size(); i++)
        if(islower(s[i]))
            s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    cout<<s;
    return 0;
}
