/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int q,qa,qaq;
string s;

int main(){
    fast
    cin >> s;
    for(auto &c : s){
        if(c=='Q'){
            q++;
            qaq+=qa;
        }
        if(c=='A')
            qa+=q;
    }
    cout << qaq;
    return 0;
}
