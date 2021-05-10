#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int ma(0),secondmax(0),count(0);
    bool dark = false;
    for (int i = 0; i <= str.length(); i++){
        if (str[i] == 'D'){
            count++;
            dark = true;
        }
        else
            if (dark){
                if(count >= ma){
                    secondmax = ma;
                    ma = count;
            } else if(count >= secondmax) secondmax = count;
            count = 0;
            dark = false;
        }
    }
    cout << ma + secondmax;
    return 0;
}