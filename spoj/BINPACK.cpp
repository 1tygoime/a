#include <bits/stdc++.h>
using namespace std;

int L, n, a[1000005], res = 1e9;
bool ok;

void sub1(int i, int t1, int t2, int cnt){
  if(i > n){
    if(t1 + t2 == 0) res = min(res, cnt);
    else res = min(res, cnt + (t1 + t2 <= L  ? 1 : 2));
    return;
  }
  sub1(i + 1, (t1 + a[i] > L ? a[i] : t1 + a[i]), t2, cnt + (t1 + a[i] > L));
  sub1(i + 1, t1, (t2 + a[i] > L ? a[i] : t2 + a[i]), cnt + (t2 + a[i] > L));
}

void sub2(){
  int t1 = 0, t2 = 0;
  res = 0;
  for(int i = 1; i <= n; i++)
    if(a[i] == 1){
      if(L - t2 == 1) res++, t2 = 0;
      else{
        if(t1 + a[i] > L) t1 = a[i], res++;
        else t1 += a[i];
      }
    }
    else{
      if(t2 + a[i] > L) t2 = a[i], res++;
      else t2 += a[i];
    }
  if(t1 + t2 == 0) return;
  if(t1 + t2 <= L) res++;
  else res += 2;
}


void sub3(){
  //dp[i][j][k]: chon vat i, thung 1 da co j, thung 2 da co k
  int dp[10001][35][35];
  for(int i = 1; i <= n; i++) for(int j = 0; j <= L; j++) for(int k = 0; k <= L; k++)
    dp[i][j][k] = 1e9;
  dp[1][a[1]][0] = 2, dp[1][0][a[1]] = 2;

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= L; j++)
      for(int k = 0; k <= L; k++){
        if(dp[i][j][k] == 1e9) continue;
        if(j + a[i + 1] <= L) dp[i + 1][j + a[i + 1]][k] = min(dp[i + 1][j + a[i + 1]][k], dp[i][j][k]);
        else dp[i + 1][a[i + 1]][k] = min(dp[i + 1][a[i + 1]][k], dp[i][j][k] + 1);

        if(k + a[i + 1] <= L) dp[i + 1][j][k + a[i + 1]] = min(dp[i + 1][j][k + a[i + 1]], dp[i][j][k]);
        else dp[i + 1][j][a[i + 1]] = min(dp[i + 1][j][a[i + 1]], dp[i][j][k] + 1);
      }

  for(int i = 0; i <= L; i++) for(int j = 0; j <= L; j++) res = min(res, dp[n][i][j]);
}

void sub4(){
  int dp1[101][101][5001]; // vat i, su dung j thung, thung 1 do L1 = thung 2
  for(int i = 0; i <= n; i++) for(int j = 0; j <= n; j++) for(int k = 0; k <= L; k++)
    dp1[i][j][k] = 1e9;
  dp1[1][2][a[1]] = 0;
  dp1[1][2][0] = a[1];
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      for(int k = 0; k <= L; k++){
        if(dp1[i][j][k] == 1e9) continue;
        // + hang thung 1
        if(k + a[i + 1] <= L) dp1[i + 1][j][k + a[i + 1]] = min(dp1[i + 1][j][k + a[i + 1]], dp1[i][j][k]);
        // dong thung 1
        else dp1[i + 1][j + 1][a[i + 1]] = min(dp1[i + 1][j + 1][a[i + 1]], dp1[i][j][k]);
        // + hang thung 2
        int L2 = dp1[i][j][k];
        if(L2 + a[i + 1] <= L) dp1[i + 1][j][k] = min(dp1[i + 1][j][k], L2 + a[i + 1]);
        // dong thung 2
        else dp1[i + 1][j + 1][k] = min(dp1[i + 1][j + 1][k], a[i + 1]);
      }

  for(int n1 = 0; n1 <= L; n1++)
    for(int sum = 1; sum <= n; sum++)
      if(dp1[n][sum][n1] != 1e9)  {
        res = min(res, sum);
      }

}

#define cnt first
#define L2 second

void sub5(){
  pair <int, int> dp2[10001][5001]; // dp2[i][L1] = {cnt, L2}
  for(int i = 0; i <= n + 1; i++) for(int j = 0; j < L + 1; j++) dp2[i][j] = {1e9, 1e9};
  dp2[1][0] = make_pair(2, a[1]), dp2[1][a[1]] = make_pair(2, 0);

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= L; j++){
      if(dp2[i][j].cnt == 1e9 || dp2[i][j].L2 == 1e9) continue;

      // + hang thung 1
      if(j + a[i + 1] <= L) dp2[i + 1][j + a[i + 1]] = min(dp2[i + 1][j + a[i + 1]], dp2[i][j]);
      // dong thung 1
      else dp2[i + 1][a[i + 1]] = min(dp2[i + 1][a[i + 1]], {dp2[i][j].cnt + 1, dp2[i][j].L2});

      // thung 2
      int jj = dp2[i][j].L2;
      if(jj + a[i + 1] <= L) dp2[i + 1][j] = min(dp2[i + 1][j], {dp2[i][j].cnt, jj + a[i + 1]});
      else dp2[i + 1][j] = min(dp2[i + 1][j], {dp2[i][j].cnt + 1, a[i + 1]});

    }

  for(int j = 0; j <= L; j++) res = min(res, dp2[n][j].cnt);
}

int main(){
  cin >> L >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i] >= 3) ok = 1;
  }

  if(n <= 20) sub1(1, 0, 0, 0);
  else if(!ok) sub2();
  else if(L <= 30) sub3();
  else if(n <= 100) sub4();
  else sub5();

  cout << res;
  return 0;
}
