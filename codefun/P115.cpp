#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x < 50) cout << x*2;
    else{
        if(x < 70) cout << "Break the Mac";
        else cout << 0;
    }
    return 0;
}