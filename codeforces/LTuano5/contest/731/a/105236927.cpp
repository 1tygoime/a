#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    string s;
    int res = 0;
    cin >> s;
//    s.push_front('a');
    res = min((s[0] - 'a'), 26 - s[0] + 'a');
    for(int i = 1; i < s.size(); i++){
        res += min(abs(s[i] - s[i - 1]), 26 - abs(s[i] - s[i - 1]));
    }
    cout << res;
    return 0;
}
