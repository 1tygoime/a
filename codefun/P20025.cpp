#include <bits/stdc++.h>
using namespace std;

bool NamNhuan(int n){
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) return true;
    else return false;
}

int main(){
    long long mm,yy;
    while (cin >> mm){
    cin >> yy;
    if (NamNhuan(yy)){
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) cout << 31 << '\n';
        else if (mm == 4 || mm == 6 || mm == 9 || mm ==11)cout << 30 << '\n';
        else if (mm == 2) cout << 29 << '\n';
    }
    else{
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) cout << 31 << '\n';
        else if (mm == 4 || mm == 6 || mm == 9 || mm ==11)cout << 30 << '\n';
        else if (mm == 2) cout << 28 << '\n';
        }
    }
    return 0;
}