#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull f[100005],n;
int m;

void init(){
    f[0]=1;
    f[1]=1;
    m=1;
    while (f[m] + f[m-1]<=n){
        m++;
        f[m]=f[m-1]+f[m-2];
    }
}

bool isPrime(ull x){
    if (x < 2)
        return false;
    else
        if (x == 2)
            return true;
        else
            if (x % 2 == 0)
                return false;
    else{
        for (int i = 3; i <= sqrt(x); i++)
            if (x % i == 0) return false;
        return true;
    }
}


int main(){
    cin >> n;
    init();
    while (!(isPrime(f[m])))
        m--;
    cout << f[m];
    return 0;
}
