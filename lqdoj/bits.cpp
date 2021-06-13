#include <bits/stdc++.h>
using namespace std;

#define getbit(x, i) (((x) >> (i)) & 1LL)
#define onbit(x, i) ((x) | (1LL << (i)))

long long n, l, r;

int main(){
  while(cin >> n >> l >> r){
    long long res = 0;

    for(int i = 31; i >= 0; i--){
      if(getbit(n, i)) {
        long long state1 = onbit(res, i);
        if(state1 <= l) res = state1;
      }
      else{
        long long state2 = onbit(res, i);
        if(state2 <= r) res = state2;
      }
    }

    cout << res << '\n';
  }
}
