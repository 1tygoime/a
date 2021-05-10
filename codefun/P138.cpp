#include <bits/stdc++.h>
using namespace std;

int main(){
    string sticks = "";
    for (int i = 0; i < 6; i++){
        string str;
        cin >> str;
        sticks += str;
    }
    bool leg = false;
    int count = 1;
    sort(sticks.begin(),sticks.end());
    for (int i = 0; i < 6; i++){
            if(sticks[i] == sticks[i - 1]){
                count++;
                if (count >= 4){
                    sticks.erase(i - 3, 4);
                    leg = true;
                    break;
                }
            } else count = 1;
        }
    if (leg == false) cout << "Alien";
    else if (sticks[0] == sticks[1]) cout << "Elephant";
    else cout << "Bear";
    return 0;
}