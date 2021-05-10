#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    k=240-k;
    for(int i = n;i>=0;i--){
        if(5*i*(i+1)/2<=k){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
