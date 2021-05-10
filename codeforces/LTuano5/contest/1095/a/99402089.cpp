/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    int n;
    string s; cin >> n >> s;
    for(int i = 0; i < s.size(); i++){
        s.erase(i,i);
    }
    cout << s;
    return 0;
}
