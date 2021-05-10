/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n,k;
string s;
vector <string> str;

int main(){
    fast
    cin >> n >> k >> s;
    s += s;
    for(int i = 0; i < n; i++)
        str.push_back(s.substr(i,n));
    sort(str.begin(),str.end());
    cout << str[--k];
    return 0;
}
