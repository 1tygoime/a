#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,k,s(0),a[20005];
int t;

void res(){
    ll h(0);
    cin >> n >> m >> k;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (ll i = 1; i <= n; i++){
        if(m<a[i]){
            while(m<a[i]){
                m+=20;
                h++;
            }
        }
        if(m>=a[i]){
            m-=a[i];
        }
    }
    if(h>k)
        cout<<"NO";
    else
        cout<<"YES\n"<<h;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--){
        res();
        if(t>0)
            cout<<'\n';
    }
    return 0;
}
