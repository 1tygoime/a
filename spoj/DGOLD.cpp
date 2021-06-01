#include <bits/stdc++.h>
using namespace std;

int n, a[25], res;
unordered_map <int, int> ok;

void Try(int i, int sum1, int sum2){
  if(i > n / 2){
//    cout<<"aaaaa";
    ok[sum1 - sum2] = max(ok[sum1 - sum2], sum1);
    return;
  }

  Try(i + 1, sum1, sum2);
  Try(i + 1, sum1 + a[i], sum2);
  Try(i + 1, sum1, sum2 + a[i]);
}

void Try1(int i, int sum1, int sum2){
  if(i > n){
//    cout<<"aaaa";
//    cout << ok[sum2 - sum1] << "\n";
    if(ok.count(sum2 - sum1)) res = max(res, ok[sum2 - sum1] + sum1);
    return;
  }

  Try1(i + 1, sum1, sum2);
  Try1(i + 1, sum1 + a[i], sum2);
  Try1(i + 1, sum1, sum2 + a[i]);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  Try(1, 0, 0);
  Try1(n / 2 + 1, 0, 0);

  cout << res;
  return 0;
}
