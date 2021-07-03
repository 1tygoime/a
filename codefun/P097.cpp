#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int k;
    cin >> k >> str;
    for(int j = k; j > 0; j--){
        string m = "0";
        for (int i = 0; i < str.length(); i++){
            string temp = str;
            temp.erase(i,1);
            m = (temp > m ? temp : m);
        }
        str = m;
    }
    cout << str;
    return 0;
}
