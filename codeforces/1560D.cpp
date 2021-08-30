#include<bits/stdc++.h>
using namespace std;

vector<int> v;
string s[60];
int dp[25][25];

int check(string x, string y){
//    x = " " + x;
//    y = " " + y;
    int i = 1, j = 1, s = 0;
    int n = x.size(), m = y.size();
    while (i <= n){
        while (j <= m){
            if (y[j] == x[i]){
                s++;
                j++;
                break;
            }
            j++;
        }
        if (s < i) break;
        i++;
    }
    return s;
}

void solve(){
  int n, res = 1e9;
  cin >> n;

  string f = ' ' + to_string(n);

  for(string cc : s){

//    memset(dp, 0, sizeof(dp));

//    int c = 0;
//    for(int i = 1; i < f.size(); i++)
//      for(int j = 1; j < cc.size(); j++)
//        if(f[i] == cc[j]) ++c;

    res = min(res, (int)check(f, cc));
  }

  cout << res << '\n';

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for(int i = 0; i <= 59; i++)
    s[i] = ' ' + to_string(1LL << i);

  int t;
  for(cin >> t; t--; ) solve();
}

