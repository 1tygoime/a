#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

long long pre1[MAX], pre2[MAX], a[MAX], b[MAX]; int n;

void ok(){
  memset(pre1, 0, sizeof(pre1));
  memset(pre2, 0, sizeof(pre2));

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) cin >> b[i];

  sort(a + 1, a + 1 + n, greater<long long>());
  sort(b + 1, b + 1 + n, greater<long long>());

  for(int i = 1; i <= n; i++) pre1[i] = pre1[i - 1] + a[i],
    pre2[i] = pre2[i - 1] + b[i];

  int res = 0;
  long long L = 0, R = 1e9;
  for(; L < R; ){
    long long M = (L + R) / 2;

    long long stages = n + M - (n + M) / 4;
    long long score1 = M * 100 + pre1[max(stages - M, 0LL)],
              score2 = pre2[min(stages, 1LL * n)];

//    cout << score1 << ' ' << score2 << endl;
    if(score1 < score2) res = M, L = M + 1;
    else R = M;
  }

  cout << L << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--;) ok();

  return 0;
}
