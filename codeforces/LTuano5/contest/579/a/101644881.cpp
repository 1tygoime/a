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
int n;
int main(){
    fast;
    cin >> n;
    int s = 0;
    while (n){
        if (n % 2 == 0)
            n/=2;
        else{
            s++;
            n--;
        }
    }
    cout << s;
	return 0;
}
