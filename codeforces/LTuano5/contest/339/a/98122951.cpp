#include <bits/stdc++.h>
using namespace std;
int d[5];
int main(){
    string s,res="";
    cin >> s;
    for(auto c:s){
        d[c-'0']++;
    }
    for(int i = 1; i <= 3; i++){
        if(d[i]>0){
            for(int j = 0; j < d[i]; j++){
                res.push_back(i+'0');
                res.push_back('+');
            }
        }
    }
    while(res.back()=='+')
        res.pop_back();
    cout<<res;
    return 0;
}
