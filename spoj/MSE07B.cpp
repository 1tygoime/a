/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
set <pii> s;
int main(){
    fast;
    int n, k, p;
    cin >> n;
    while(n){
        if (n == 1){
            cin >> k >> p;
            s.insert({p, k}); // pair sort theo p
        }
        else if (n == 2){
            if(s.empty())
                cout << 0 << '\n';
            else{
                auto it = s.end();
                cout << (--it)->second << '\n';
                s.erase(it);
            }
        }
        else{
            if (s.empty()){
                cout << 0 << '\n';
            }
            else{
                auto it = s.begin();
                cout << it->second << '\n';
                s.erase(it);
            }
        }
        cin >> n;
    }
	return 0;
}
