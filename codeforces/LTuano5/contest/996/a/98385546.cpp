#include <bits/stdc++.h>
using namespace std;
int d[]={1,5,10,20,100};
int main(){
    int n,res(0);
    cin >> n;
    for(int i = 4; i >= 0; i--){
        res+=n/d[i];
        n%=d[i];
    }
    cout<<res;
}
