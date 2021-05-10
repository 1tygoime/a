/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    int n;
    set <int> s;
    for (cin >> n; n--; ){
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() < 2)
        cout << "NO";
    else{
        auto it=s.begin();
        ++it;
        cout <<*it;
    }
}