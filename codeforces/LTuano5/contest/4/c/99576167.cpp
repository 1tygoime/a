#include <bits/stdc++.h>
using namespace std;
map <string, int> ok;
int main(){
    string s;
    int n;
    for (cin >> n; n--; ){
        cin >> s;
        if(ok[s])
            cout << s <<ok[s] << '\n';
        else
            cout << "OK\n";
        ok[s]++;
    }
}
