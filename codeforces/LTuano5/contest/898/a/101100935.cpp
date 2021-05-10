/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    int n;
    cin >> n;
    cout << n - n % 10 + 10 * (n % 10 > 5);
    return 0;
}
