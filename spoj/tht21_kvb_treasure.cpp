#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 100;

int n;
ll s, res = LLONG_MAX;
ll a[N];

const int MAX_SUB = 1e6;
int cnt;
pair<ll, ll> pack[MAX_SUB];

void Try(int i, int lim, ll sum_1, ll sum_2, bool state){
  if(i > lim){
    if(!state)
      pack[++cnt] = {sum_1 - sum_2, sum_1};

    else{
      auto it = upper_bound(pack + 1, pack + 1 + cnt, make_pair(sum_2 - sum_1, LLONG_MAX)) - pack - 1;

      if(it <= 0)
        return;
      if(pack[it].first != sum_2 - sum_1)
        return;

      ll partOne = sum_1 + sum_2;
      ll partTwo = 2 * pack[it].second - pack[it].first;

      res = min(res, s - partOne - partTwo);
    }

    return;
  }

  Try(i + 1, lim, sum_1, sum_2, state);
  Try(i + 1, lim, sum_1 + a[i], sum_2, state);
  Try(i + 1, lim, sum_1, sum_2 + a[i], state);
}

void sub1(){
  cnt = 0;
  res = LLONG_MAX;

  Try(1, n / 2, 0, 0, 0);

  sort(pack + 1, pack + 1 + cnt);

  Try(n / 2 + 1, n, 0, 0, 1);

  cout << res << '\n';
}

const int S = 1e5;

//dp[i, j] = min sum of items which aren't sold
//in i-th items, difference between pack 1, 2
//is j
ll dp[N][S << 1];

void sub2(){
  for(int i = 0; i <= n; i++)
    for(int j = 0; j < S << 1; j++)
      dp[i][j] = 1e18;

  dp[0][S] = 0;

  for(int i = 1; i <= n; i++)
    for(int cur_s = -s; cur_s <= s; cur_s++){
      int j = cur_s + S;

//      cout << "i = " << i << ", j = " << j << ":" << dp[i - 1][j + a[i]] << " " << dp[i - 1][j - a[i]] << " " << dp[i - 1][j] << endl;

      //A
      dp[i][j] = min(dp[i][j], dp[i - 1][j + a[i]]);

      //B
      dp[i][j] = min(dp[i][j], dp[i - 1][j - a[i]]);

      //sell
      dp[i][j] = min(dp[i][j], dp[i - 1][j] + a[i]);
    }


  cout << dp[n][S] << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  while(cin >> n){
    for(int i = 1; i <= n; i++)
      cin >> a[i];

    s = accumulate(a + 1, a + 1 + n, 0LL);

    if(n <= 24)
      sub1();
    else
      sub2();
  }

  return 0;
}
