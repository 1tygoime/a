#include<bits/stdc++.h>
using namespace std;

const long long md[]={(long long)1e9+7,(long long)1e9+21,(long long)1e9+97,(long long)1e9+9,(long long)1e9+33};

int n, x[5];
string s;

bool done = 0;

long long conv(string s, long long mod){
  long long base = 1, res = 0;

  for(int i = s.size() - 1;  i >= 0; i--){
    res = (res + (s[i] - '0') * base) % mod;
    base = (base * 2) % mod;
  }

  return res;
}

void out(){
  if(done) return;
  int l1 = x[1], r1 = x[2], l2 = x[3], r2 = x[4];

  if(l1 > r1 || l2 > r2) return;
  if(r1 - l1 + 1 < n / 2 || r2 - l2 + 1 < n / 2) return;
  if(l1 == l2 && r1 == r2) return;

  string s1 = "", s2 = "";
  bool has1 = 0, has2 = 0;
  for(int i = l1; i <= r1; i++){
    if(i > n) return;
    s1 += s[i];
    if(s[i] == '1') has1 = 1;
  }

  for(int i = l2; i <= r2; i++){
    if(i > n) return;
    s2 += s[i];
    if(s[i] == '1') has2 = 1;
  }

  if(has1 == 0){
    cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << '\n';
    done = 1;
    return;
  }

  if(has2 == 0) return;

  int pass = 0;
  for(long long mod: md){
    long long n1 = conv(s1, mod), n2 = conv(s2, mod);
    if(n2 == 0) return;

    if(n1 % n2 == 0){
      ++pass;
    }
  }

  if(pass == 5){
    cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << '\n';
    done = 1;
    return;
  }
}

void Try(int i){
  if(done) return;
  for(int j: {1, n / 2, n / 2 + 1, n}){
    x[i] = j;

    if(i == 4) out();
    else Try(i + 1);
  }
}

void solve(){
  done = 0;
  cin >> n >> s;

  s = ' ' + s;

  Try(1);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
