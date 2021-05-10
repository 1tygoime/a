#include <bits/stdc++.h>
using namespace std;
int main(){
    int c(0),ma(0);
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size()-1; i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            ma=max(ma,c);
            c=0;
        }
    }
    ma=max(ma,c);
    cout<<(ma>=6?"YES":"NO");
    return 0;
}
