#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int n, ma;
string sma;
unordered_map <string, int> um;

void copycode(){
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        um[s]++;
        if (um[s] > ma) ma = um[s], sma = s;
    }
    cout << sma;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    copycode();

    return 0;
}
