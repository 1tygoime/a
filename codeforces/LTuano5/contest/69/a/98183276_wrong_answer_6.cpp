#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,x,s(0);
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> x;
            s+=x;
        }
    }
    cout<<(s==0?"YES":"NO");
}
