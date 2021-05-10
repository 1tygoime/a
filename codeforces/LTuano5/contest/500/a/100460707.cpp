/// your code goes here
#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n,k;
    cin>>n>>k;--n;
    for(int i=1;i<=n;++i) cin >>a[i];
    int res=1;
    for(;res<k&&res<=n;res+=a[res]) {}
    cout<<(res==k?"YES":"NO");
    return 0;
}