#include <bits/stdc++.h>
using namespace std;
int main(){
    const string s="hello";
    string s1;
    cin >> s1;
    int pos(0);
    for (int i = 0; i < s1.size(); i++){
        if(s1[i]==s[pos])
            pos++;
        if(pos==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
