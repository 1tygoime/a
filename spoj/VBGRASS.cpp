#include <bits/stdc++.h>
using namespace std;

char a[101][101];
int r, c, res;

bool in(int u, int v){
  return u >= 1 && u <= r && v >= 1 && v <= c;
}

int main(){
  cin >> r >> c;

  for(int i = 1; i <= r; i++)
    for(int j = 1; j <= c; j++) cin >> a[i][j];

  for(int i = 1; i <= r; i++)
    for(int j = 1; j <= c; j++)
      if(a[i][j] == '#'){
        res++;
        a[i][j] = '.';

        if(in(i, j + 1)) a[i][j + 1] = '.';
        if(in(i + 1, j)) a[i + 1][j] = '.';
      }

  cout << res;

}
