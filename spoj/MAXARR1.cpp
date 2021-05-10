/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

ll a[100005];

void gen(){
    a[0]=0;
    a[1]=1;
    for(int i = 2; i <= 100005; i++){
        if (i%2==0)a[i]=a[i/2];
        else a[i] = a[i/2]+a[i/2+1];
    }
    // a[i] = max (a[0],...a[i])
    for (int i = 2; i <= 100005; i++)
        a[i] = max(a[i], a[i-1]);
}

int main(){
    fast
    gen();
    int t;
    for(cin >> t; t--; ){
        int n;
        cin >> n;
        cout<< a[n] << '\n';
    }
}
