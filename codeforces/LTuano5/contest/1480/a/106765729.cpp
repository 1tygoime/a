#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void SOL(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i += 2){
        if (s[i] != 'a') s[i] = 'a';
        else s[i]++;
    }
    for(int i = 1; i < s.size(); i += 2)
        if (s[i] != 'z') s[i] = 'z';
        else s[i]--;
    cout << s << '\n';
}

int main(){
    int t;
    for(cin >> t; t--; ){
        SOL();
    }

    return 0;
}
