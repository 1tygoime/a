#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for (int i = 2; i <= trunc(sqrt(n)); i++)
        if (n%i==0)
            return false;
    return true;            
}

int main(){
    int n,x;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if (prime(x))
            cout << 1 << ' ' << x;
            else{
                for (int i = trunc(sqrt(x)); i >= 1; i--)
                    if (x%(i*i)==0){
                        cout << i << ' ' << (x/(i*i));
                        break;
                    }
            }
        if (i<n)
            cout << '\n';
        }
    return 0;
}
    