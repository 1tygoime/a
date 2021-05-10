/*
    LTo5
    non ngay?
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
ll a,b,k,res;

int main(){
    fast
    for (cin >> t; t--; ){
        res=0;
        cin >> a >> b >> k;
        for(int i = 1; i <= k/2; i++)
            res += (a-b);
        cout << (k%2?res+a:res) << '\n';
    }
    return 0;
}