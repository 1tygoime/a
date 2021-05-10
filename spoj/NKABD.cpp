#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(int x){
    if (x==1)
        return 0;
    ll s(1);
    for (int i = 2; i * i <= x; i++){
        if(x%i==0){
            int j=x/i;
            if(i==j)
                s+=i;
            else
                s=s+i+j;
        }
    }
    return s;
}

int main(){
    int l,r,cnt(0);
    cin>>l>>r;
    for(int i = l ; i <= r; i++)
        if(sum(i)>i)
            cnt++;
    cout<<cnt;
    return 0;
}
/*LTO5*/
