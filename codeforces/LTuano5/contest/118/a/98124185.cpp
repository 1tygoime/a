#include <bits/stdc++.h>
using namespace std;

int main(){
    string vowel="AOYEUIaoyeui",s,res="";
    cin >> s;
    for(auto c:s){
        if(vowel.find(c)==-1){
            res.push_back('.');
            res.push_back(isupper(c)?c+32:c);
        }
    }
    cout<<res;
    return 0;
}
