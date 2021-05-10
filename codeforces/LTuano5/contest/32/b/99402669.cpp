/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='-'){
            if (s[i + 1]=='.'){
                cout << 1;
                i++;
            }
            else if (s[i + 1] == '-'){
                cout << 2;
                i++;
            }
        }
        else cout << 0;
    }
    return 0;
}
