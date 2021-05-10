#include <bits/stdc++.h>
using namespace std;

struct block{
  int A, B, H, lct;
  bool operator <(const block &i){
    return A * B < i.A * i.B;
  }
};

block a[5005];
int dp[5005], dp_len[5005], N, max_len, max_height;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> N;
  for(int i = 1; i <= N; i++) cin >> a[i].A >> a[i].B >> a[i].H;

  sort(a + 1, a + 1 + N);
  for(int i = 1; i <= N; i++){
    dp[i] = a[i].H;
    dp_len[i] = 1;

    for(int j = 1; j < i; j++)
      if(a[j].A < a[i].A && a[j].B < a[i].B)
        dp[i] = max(dp[i], dp[j] + a[i].H),
        dp_len[i] = max(dp_len[i], dp_len[j] + 1);

    max_len = max(max_len, dp_len[i]),
    max_height = max(max_height, dp[i]);
  }
  cout << max_len << ' ' << max_height;

  return 0;
}
