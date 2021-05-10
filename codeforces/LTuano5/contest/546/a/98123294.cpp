#include <bits/stdc++.h>
using namespace std;
int d[5];
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    cout<< (((w*(w+1)/2)*k-n)>0?((w*(w+1)/2)*k-n):0);
    return 0;
}
