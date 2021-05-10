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
#define out(v) cout << '\n'; for ( const auto &c : (v) ) cout << c << ' '; cout << '\n';
const int nmax = 100001;
bool isP[100005];
vector <int> prime;
int n;

void sieve(){
    for(int i = 2; i * i <= nmax; i++){
        if (!isP[i])
            for(int j = i * i; j <= nmax; j += i)
                isP[j] = 1;
    }
    for(int i = 2; i <= nmax; i++) if (!isP[i]) prime.pb(i);
}

int sumD(int x){
    int res = 0;
    for(; x; res += x % 10, x /= 10);
    return res;
}

bool oneD(int n){
    int cnt = 0;
    while (n){
        cnt++;
        n /= 10;
        if (cnt > 1)
            return 0;
    }
    return 1;
}

int main(){
	fast
	sieve();
	cin >> n;
	int res;
	bool check = 0;
	auto it = upper_bound(prime.begin(), prime.end(), n) - prime.begin();
	if (!it){
        cout << 0;
        return 0;
	}
	--it;
	for(int i = 0; i <= it; i++)
        if(!oneD(prime[i])&&!isP[sumD(prime[i])]){
            check = 1;
            cout << prime[i] << ' ';
        }
    if (!check) cout << 0;
	return 0;
}
    