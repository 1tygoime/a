#include <bits/stdc++.h>
using namespace std;
#define n 200005
bool prime[n];

void sieve(){
    for(int i = 2; i <= n; i++)
        prime[i]=true;
    for(int i = 2; i * i <= n; i++){
        if(prime[i])
            for(int j = i * i;  j <= n; j+=i)
                prime[j]=false;
    }
}

int main(){
    sieve();
    int a,b;
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        if(prime[i])
            cout<<i<<'\n';
    }
    return 0;
}
/* lto5 */
