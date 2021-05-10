//thuat toan sang nguyen to, nhung gach ca so nguyen to
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int nmax = 1e3+5;
int n,k,res,cnt;
bool a[nmax],check;
int main() {
    fast
	while(cin >> n >> k){
        memset(a,true,nmax);
        check=false;
        cnt=0;
        for(int i = 2; i <= n && !check; i++){
        //gach tu so nho nhat chua bi gach
            if(a[i])
                cnt++;
            if(cnt==k){
                cout<<i<<'\n';
                check=true;
            }
            for(int j = i * i; j <= n&&!check; j+=i){
                if (a[j]){
                    a[j]=false;
                    cnt++;
                    if(cnt==k){
                        cout<<j<<'\n';
                        check=true;
                    }
                }
            }
        }
	}
	return 0;
}


/* LTo5*/
