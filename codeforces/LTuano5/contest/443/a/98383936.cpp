#include <bits/stdc++.h>
using namespace std;
bool d[255];
int cnt(0);
int main(){
    string s;
    getline(cin,s);
    for(auto &c:s){
        if (c>='a'&&c<='z')
            d[c]=true;
    }
    for(auto &c:d)
        if (c)
            cnt++;
    cout<<cnt;
    return 0;
}
