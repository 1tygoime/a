#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.length()>10)
            cout<<s[0]<<s.length()-2<<s.back();
        else
            cout<<s;
        if(n>0)
            cout<<'\n';
    }
    return 0;
}
