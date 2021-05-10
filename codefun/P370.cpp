#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a,b,ucln;
    cin >> a >> b;
    unsigned long long c = a, d = b;
    if (a == 0 || b == 0) ucln = a + b;
    else{
    if (a == b) ucln = a;
    else{
        while (b!= 0){
            long long tmp = a%b;
            a = b;
            b = tmp;
        }
        ucln = a;
    }
    }
    cout << c*d/ucln;
    return 0;
}