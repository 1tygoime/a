#include<bits/stdc++.h>
using namespace std;

const int N = 5005;

long long s[N];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> s[i],
    s[i] += s[i - 1];

  int res = 0;
  for(int k = 1; k <= n; k++){
    int l = 1, r = n;

    while(l <= k && r >= k){
      if(2 * s[k] == s[l - 1] + s[r])
        res = max(res, r - l + 1),
        ++l,
        --r;
      else if(2 * s[k] < s[l - 1] + s[r]) --r;
      else ++l;
    }
  }

  cout << res;

  return 0;
}
