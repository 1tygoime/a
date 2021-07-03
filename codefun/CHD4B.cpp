#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    long long x,s(0);
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n >> k;
        for (int i = 1; i <= n; i++){
            cin >> x;
            s+=x;
        }
        if (s%k==0){
            cout<<"YES\n";
            for (int i = 1; i < n; i++)
                cout<<i << ' ';
            cout<<n;
        }
        else cout << "NO";
        if (i < t)
            cout <<'\n';
    }
    return 0;
}
