/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a,b,c;
int main(){
    fast

    while (cin >> a >> b >> c){
        cout << (max(b-a-1,c-b-1)) << '\n';
    }
    return 0;
}
