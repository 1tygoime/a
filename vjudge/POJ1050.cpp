#include <iostream>
#include <limits.h>
using namespace std;

int a[151][151], n, res = INT_MIN;

int main(){
//  freopen("RSQ2.INP", "r", stdin);
//  freopen("RSQ2.OUT", "w", stdout);

  cin >> n;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j], a[i][j] += a[i - 1][j];

  for(int i = 1; i <= n; i++)
    for(int j = i; j <= n; j++){
      // di tu [i, j] xuong
      int res_tmp = INT_MIN, s_min = 0, curr = 0;

      for(int k = 1; k <= n; k++){
        // xet khoang [i, j] moi hang
        curr += a[j][k] - a[i][k];
        res_tmp = max(res_tmp, curr - s_min);
        s_min = min(s_min, curr);
      }

      res = max(res, res_tmp);
    }

  cout << res;
  return 0;
}
/*
  1  2  3  4

1  0 −2 −7 0
   |--|
2  9  2 −6 2  a[j][2] - a[i - 1][2]
   |  |
3  −4 1 −4 1
   |  |
4  −1 8 0 −2
   |--|

15
*/
