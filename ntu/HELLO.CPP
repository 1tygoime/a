#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    const string ex = "hello";
    string s;
    cin >> s;
    int pos = 0;
    for(const char &c : s)
        if (c == ex[pos])
            pos++;
    if (pos == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
    