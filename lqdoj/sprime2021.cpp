#include <bits/stdc++.h>
using namespace std;

const int MAX = 3 * 1e6;
int lp[MAX + 5];
vector<int> pr;

void sieve(){
  for(int i = 2; i <= MAX; i++){
    if(!lp[i]) lp[i] = i, pr.push_back(i);

    for(int j = 0; j < pr.size() && pr[j] <= lp[i] && i * pr[j] <= MAX; j++)
      lp[i * pr[j]] = pr[j];
  }
}

bool c5(int x){
  int cnt = 0;
  while(x) cnt += x % 10, x /= 10;
  return cnt % 5;
}

int main(){
  sieve();

  int qry;
  for(cin >> qry; qry--; ){
    int x, y, res = 0;
    cin >> x >> y;

    auto left = lower_bound(pr.begin(), pr.end(), x) - pr.begin(),
        right = upper_bound(pr.begin(), pr.end(), y) - pr.begin() - 1;

    for(; left <= right; left++)
      res += !(c5(pr[left]));

    cout << res << '\n';
  }
}
