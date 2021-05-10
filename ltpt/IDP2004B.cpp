#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int nmax=1e5+5;
int s[nmax][26],n,q,l,r;
char c;
int main(){
    fast
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> c;
        for(char j='a'; j<='z'; j++)
            s[i][j]=s[i-1][j];
        s[i][c]++;
    }
    while(q--){
        cin >> l >> r >> c;
        cout << s[r][c] - s[--l][c] << (q > 0 ? "\n" : "");
    }
}
