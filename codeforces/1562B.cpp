#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

bool p[N + 5];
int x[15], done;
int n, curr, res; string s;

void out(int k){

  int tmp_num = 0, tmp_dig = 0;

  for(int i = 1; i <= k; i++){
    ++tmp_dig;
    tmp_num = tmp_num * 10 + s[x[i]] - '0';


    if(p[tmp_num] && curr > tmp_dig){
      curr = tmp_dig;
      res = tmp_num;
    }
  }

}

void Try(int i, int k){
  for(int j = x[i - 1] + 1; j <= n - k + i; j++){
    x[i] = j;
    if(i == k)
      out(k);
    else
      Try(i + 1, k);
  }
}

void solve(){
  memset(x, 0, sizeof(x));

  cin >> n >> s;

  s = ' ' + s;

  int k = min(4, n); curr = n + 1, res = 1e9;

  for(int i = 1; i <= k; i++){
    Try(1, i);

    if(curr != n + 1 || res != 1e9) break;
  }

  cout << curr << '\n' << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  p[1] = 1;
  for(int i = 2; i * i <= N; ++i)
    if(!p[i])
      for(int j = i * i; j <= N; j += i)
        p[j] = 1;

//  cout << p[6] << endl;

  int t;
  for(cin >> t; t--; ) solve();
}
