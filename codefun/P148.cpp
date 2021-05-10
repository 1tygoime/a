#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    if (b == 0){
        if (a != 0) cout << 0;
        else cout << "%";
    }
    else if (a % b == 0) cout << '%';
    else if (b % a == 0) cout << "%";
    else cout << 0;
    return 0;
}