#include<bits/stdc++.h>
using namespace std;

int main(){
    long long dtoan,dly,dhoa,tong;
    cin >> dtoan >> dly >> dhoa;
    tong = dtoan + dly + dhoa;
    if (tong < 15) cout << "Fail";
    else{
        if (dtoan > 5 && dly > 5 && dhoa > 5) cout << "Excellent";
        else cout << "Medium";
    }
    return 0;
}