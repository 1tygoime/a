/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define nmax 2000005
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string s1,s;
int main(){
    fast
    int t;
    for(cin >> t, cin.ignore(); t--; ){
        getline(cin,s1);
        stringstream ss(s1);
        int ma=0,cnt=0,len=0;
        while (ss >> s){
            int tmp = s.length();
            if(tmp==len)
                cnt++;
            else{
                ma = max(ma,cnt);
                cnt=1;
                len=tmp;
            }
        }
        cout << max(ma,cnt) << (t > 0 ? "\n" : "");
    }
    return 0;
}

