/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s,s1;
    cin >> s >> s1;
    int vt=s.size(); // 2 xau co the giao = rong
    for(int i = 0; i < s.size(); i++){
        bool check = 1;
        for(int j = i; j < s.size(); j++)
            if (s[j] != s1[j-i]){
                check = 0;
                break;
            }
        if(check){ vt = i; break; }
    }
    cout << s1.size()+vt;
    return 0;
}
