#include<bits/stdc++.h>
using namespace std;

int main(){
    long double a,b;
    char c;
    cin >> a >> b >> c;
    if ((int)c == 43) cout << setprecision(2) << fixed << a + b;
    else{
        if ((int)c == 45) cout << setprecision(2) << fixed << a - b;
        else{
            if ((int)c == 42) cout << setprecision(2) << fixed << a * b;
            else{
                if ((int)c == 47) cout << setprecision(2) << fixed << a / b;
            }
        }
    }
    return 0;
}