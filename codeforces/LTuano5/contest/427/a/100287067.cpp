/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, police, crime, x;
int main(){
    fast
    for (cin >> n; n--; ){
        cin >> x;
        if (x > 0)
            police+=x;
        else if (police) police--;
        else crime++;
    }
    cout << crime;
    return 0;
}

