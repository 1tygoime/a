#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int a[MAX],n,high(INT_MIN),cnt[MAX],res;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        high=max(a[i],high);
        cnt[a[i]]++;
    }
    int cnter=0;
    bool chk=false;
    for (int i = high; i >= 1; i--){
        if(chk)
            break;
        int j = i;
        cnter=0;
        while (j <= high){
            if(chk)
                break;
            if (cnt[j]>=2){
                res=j;
                chk=true;
            }
            else
                if (cnt[j]==1)
                    cnter++;
            j+=i;
            if (cnter==2){
                res=i;
                chk=true;
            }
        }
    }
    cout<<res;
}

///////////////////////////
/*
#include<bits/stdc++.h>
using namespace std;
 
#define IOS               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int               long long int
#define endl              "\n"
 
const int N = 1e6 + 1;
 
int ans[N];
 
signed main() {
	IOS;
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i ++) {
		cin >> x;
		for (int j = 1; j * j <= x; j ++)
			if (x % j) continue;
			else {
				ans[j] ++;
				if (x / j != j) ans[x / j] ++;
			}
	}
	int mx = 1;
 
	for (int i = 1; i < N; i ++)
		if (ans[i] > 1) {
			mx = max(i, mx);
		}
	cout << mx;
	return 0;
}
*/
///////////////////////////