#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int a, b, n, k;

void copycode(){
    int n;
    string s;
    cin >> n >> s;
//    if (n <= 1){
//        cout << s << '\n';
//        return;
//    }
    for(int i = 1; i <= n; i++) cout << s[n - 1];
    cout <<'\n';
}

int main(){
    int T;
    for(cin >> T; T--; ) copycode();
}
