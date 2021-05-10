#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    int n,cnt(0);
    cin >> n;
    string s;
    cin >> s;
    s.push_back('a');
    for (int i = 0; i < n; i++)
        if(s[i]==s[i+1])
            cnt++;
    cout<<cnt;
    return 0;
}
