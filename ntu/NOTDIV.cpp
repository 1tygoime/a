#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  int L = 0, R = 1e9, res = 0;
  while(L <= R){
    int M = L + (R - L) / 2;
    int c = M - M / n;

    if(c >= k){
      if(c == k) res = M;
      R = M - 1;
    }
    else L = M + 1;
  }

  cout << res;
}
