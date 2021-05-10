/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nmax 1005
int n,x,chest,biceps,bac;
int main(){
    fast
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        chest += (i % 3 == 1 ? x : 0);
        biceps += (i % 3 == 2 ? x : 0);
        bac += (i % 3 == 0 ? x : 0);
    }
    if (max(max(chest,biceps),bac)==chest)
        cout << "chest";
    else
        cout << (max(max(chest,biceps),bac)==biceps ? "biceps" : "back");
    return 0;
}
