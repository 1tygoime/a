/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;
#define oke cout << "OK";
#define nok cout << "Not OK";
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define out(v) cout << '\n'; for ( const auto &c : (v) ) cout << c << ' '; cout << '\n';

int main(){
	fast
	int sf(0), fs(0), n;
	string s;
	cin >> n >> s; n = 0;
	for(int i = 0; i < s.size()-1; i++){
		if (s.substr(i,2)=="SF")
            n++;
		else if (s.substr(i,2)=="FS") n--;
	}
	cout << (n > 0 ? "YES" : "NO");
	return 0;
}
