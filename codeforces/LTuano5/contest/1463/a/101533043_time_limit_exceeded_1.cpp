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
int cntchange(3);
void change(int &x){
    x = (x > 1 ? x : 0);
    if(x==0) cntchange--;
}

int main(){
    fast;
    int t, a, b, c;
    for (cin >> t; t--; ){
        cin >> a >> b >> c;
        change(a); change(b); change(c);
        int tmp = a + b + c - cntchange, t1 = 7, k = 1;
        while (t1 <= tmp){
                t1+=7;
        }
        cout << (tmp % t1 == t1 - 1 ? "YES\n" : "NO\n");
    }
	return 0;
}
