/* LTo5 */
// luu y overflow
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string s;
char a,b;
ll x,y;

int main(){
    fast
    getline(cin,s);
    cin >> a >> b;
    for (auto &c : s){
        if(c == b)
            y+=x;
        if(c == a)
            x++;
    }
    cout << y;
    return 0;
}
