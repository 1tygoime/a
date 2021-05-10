#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,res="";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i,3)=="WUB"){
            res.push_back(' ');
            i+=2;
        }
        else{
            res.push_back(s[i]);
        }
    }
    cout<<res;
    return 0;
}
