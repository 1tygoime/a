/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pii pair <int,int>

unordered_set<string> ss;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        string tmp = "";
        for(int j = i; j < s.size(); j++){
            tmp += s[j];
            ss.insert(tmp);
        }
    }
    cout << ss.size();
}
