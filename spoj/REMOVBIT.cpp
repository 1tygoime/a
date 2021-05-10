/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
//const int N = 1e5 + 5;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool check;
int main(){
    fast
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            s.erase(i,1);
            check = true;
            break;
        }
    }
    if(!check) s.pop_back();
    cout << s;
    return 0;
}
