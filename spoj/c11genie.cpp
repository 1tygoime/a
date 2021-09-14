#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FORU(i,a,b) for(int i = a; i < b; i++)
#define m 1000000007
int minp[40005],factor[40005];
int n;
ll res(1);
void sieve(){
    minp[1]=1;
    for(int i = 2; i * i <= n; i++){
        if(minp[i]==0){
            for (int j = i * i; j <= n; j+=i)
                if (minp[j]==0)
                    minp[j]=i;
        }
    }
    for(int i = 2; i <= n; i++)
        if(minp[i]==0)
            minp[i]=i;
}

void factorize(int x){
    while (x!=1){
        factor[minp[x]]++;
        x/=minp[x];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    factor[1]=1;
//    freopen("bai5.inp","r",stdin);
//    freopen("bai5.out","w",stdout);
    cin >> n;
    sieve();
    for(int i = 2; i <= n; i++)
        factorize(i);
    for(int i = n; i >= 2; i--){
        if(factor[i]>=2){
            if (factor[i]%2)
                factor[i]--;
            for(int j = 1; j <= factor[i]; j++)
                res=res%m*i%m;
        }
    }
    cout<<res;
    return 0;
}
