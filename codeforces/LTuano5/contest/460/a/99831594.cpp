#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,day(0);
    cin >> n >> m;
    for (; n ; day++,n--, n+=(day%m==0)){}
    cout <<day;
}
// lto5