#include <bits/stdc++.h>
using namespace std;
bool d[26];
int main(){
    string s1;
    int n,cnt(0);
    cin >> n >> s1;
    for (auto &c:s1){
        c=tolower(c);
    }
    for (auto &c:s1)
        d[(int)(c-'a')]=true;
    for (auto &c:d)
        if(c)
            cnt++;
    cout<<(cnt==26?"YES":"NO");
}
