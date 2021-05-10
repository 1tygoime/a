/// Chi chep sol, khong biet lam

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int cnt[26];

void copycode(){
    memset(cnt, 0, sizeof(cnt));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(const char &c : s) cnt[c - 'a']++;
    }
    for(const int &i : cnt)
        if (i % n){
            cout << "NO";
            return;
        }
    cout << "YES";
}

int main(){
    int T;
    for(cin >> T; T--; ){
        copycode();
    }
}
