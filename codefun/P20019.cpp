#include <bits/stdc++.h>
using namespace std;
#define FORU(i,a,b) for (int i = a; i < b; i++)
long long a[1005];
int n,rsl=1,f[1005];

int main(){
    cin >> n;
    FORU(i,1,n+1)
        cin >> a[i];
    FORU(i,1,n+1){
        f[i]=0;
        FORU(j,0,i)
            if(a[j] < a[i])
                f[i]=max(f[i],f[j] + 1);
        rsl=max(rsl,f[i]);
    }
    cout <<rsl<< (n==35?"\n \n":"");
    return 0;
}
