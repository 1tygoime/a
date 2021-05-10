#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int length = str.length() - 1;
    for (int i = 0; i<= length; i++){
       if(isupper(str[i])) str.erase(i,1);
    }
    cout << str;
    return 0;
}