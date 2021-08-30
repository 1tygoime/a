#include<bits/stdc++.h>
using namespace std;

#define dbg(x) cerr << #x << " = " << x << endl

const int MAX = 1e5 + 5;

long long a[MAX], pre[MAX], mnp[MAX], mns[MAX];
int n;

//a[i] + .. + a[n]
long long suf(int i){
  return pre[n] - pre[i - 1];
}

int main(){
  cin >> n;

  mnp[0] = 1e18;
  for(int i = 1; i <= n; i++){
    cin >> a[i];

    pre[i] = pre[i - 1] + a[i];
    mnp[i] = min(mnp[i - 1], pre[i]);
  }

  mns[n + 1] = 1e18;
  for(int i = n; i >= 1; i--)
    mns[i] = min(mns[i + 1], pre[i]);

  int c = 0;
  for(int i = 1; i <= n; i++){
    c += a[i] > 0 && (mns[i] - pre[i - 1] > 0) && (suf(i) + mnp[i - 1] > 0);
  }

  cout << c;

  return 0;
}
