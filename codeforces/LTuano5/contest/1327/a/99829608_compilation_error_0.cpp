#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    for (cin >> t; t—; ){
        int n,k;
        cin>>n>>k;
        cout <<(1LL*k*k<=n&&k%2==n%2? "YES\n":"NO\n");
    }
}