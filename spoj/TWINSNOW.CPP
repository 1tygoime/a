#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pb push_back
#define snow vector <int>
 
vector <snow> v;
 
bool operator ==(const snow &a, const snow &b){
    for(int i = 0; i < 6; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}
 
bool operator <(const snow &a, const snow &b){
    for(int i = 0; i < 6; i++)
        if(a[i] != b[i]) return a[i] < b[i];
    return 0;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        snow s(6);
        for(int &j : s)
            cin >> j;
        sort(s.begin(), s.end());
        v.pb(s);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++)
        if (v[i] == v[i + 1]){
            cout << "Twin snowflakes found.";
            return 0;
        }
    cout << "No two snowflakes are alike.";
    return 0;
}
 