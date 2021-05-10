/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int nmax = 3000005;
bool isp[nmax];
ll prime[nmax];
int np;

void sieve(){
    for(int i = 2; i <= nmax; i++) isp[i]=1;
    for(int i = 2; i * i <= nmax; i++){
        if (isp[i]){
            for(int j = i*i; j <= nmax; j+=i)
                isp[j]=0;
        }
    }
    for(int i = 2; i <= nmax; i++)
        if(isp[i]){
            prime[++np]=i;
        }
}

int main(){
    fast
    int t;
    sieve();
    int k; ull n;
//    int np=prime.size();
    for(cin >> t; t--; ) {
        cin >> n >> k;
        ull res(0);
        for(int i = 1; i <= np-k+1; i++){
            ull tmp=1;
            bool check=false;
            for(int j = i; j <= i + k - 1; j++){
                if(tmp > n/prime[j]){
                    check=true;
                    break;
                }
                tmp = tmp * prime[j];
            }
            if(!check && tmp <= n){
                if(tmp > res) res=tmp;
            }
        }
        // ko dung ?: vi cout << (?:) chi duoc phep dung cho 2 so cung KDL
        // res la ULL, neu cout<<(?res:-1) thi se loi
        if(res>0) cout << res;
        else cout << -1;
        cout << '\n';
    }
    return 0;
}
