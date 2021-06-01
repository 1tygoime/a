#include <bits/stdc++.h>
using namespace std;

long long fact = 1;
map <long long, int> ok;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ok[1] = 1;
  for(int i = 1; i <= 20; i++) ok[(fact *= i)]++;

  int qry;
  for(cin >> qry; qry--; ){
    long long x;
    cin >> x;
    cout << ok[x] << '\n';
  }
}
