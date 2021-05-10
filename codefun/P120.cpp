#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main(){
    int dd,mm;
    cin >> dd >> mm;
    if((dd == 30 && mm == 12) || (dd == 29 && mm == 11) || (dd == 31 && mm == 10))
        cout << "Donny";
    else{
        for (int i = 9; i >= 1; i--){
            if (mm == i && dd == i + 19){
                cout << "Donny";
                return 0;
            }
        }
        cout << "Blanky";
    }
    return 0;
}
