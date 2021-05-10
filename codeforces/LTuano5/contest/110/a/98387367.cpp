#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt(0);
    string s;
    cin >> s;
    for(auto &c:s)
        if(c=='4'||c=='7')
            cnt++;
    if(cnt==0){
        cout<<"NO";
        return 0;
    }
    for(;cnt>0;cnt/=10)
        if(cnt%10!=4&&cnt%10!=7){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}
