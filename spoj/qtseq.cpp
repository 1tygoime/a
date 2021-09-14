#include<bits/stdc++.h>
using namespace std;

#define val first
#define cnt second

const int N = 1e6 + 5;

pair<long long, int> mi[N], ma[N];
long long pre[N];
int n;

long long suf(int i){
  return pre[n] - pre[i - 1];
}

int main(){
  mi[0].val = 1e18;
  ma[0].val = -1e18;

  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> pre[i];
    pre[i] += pre[i - 1];

    mi[i] = mi[i - 1];
    ma[i] = ma[i - 1];

    if(pre[i] < mi[i].val)
      mi[i].val = pre[i],
      mi[i].cnt = 1;
    else if(pre[i] == mi[i].val)
      mi[i].cnt++;

    if(pre[i] > ma[i].val)
      ma[i].val = pre[i],
      ma[i].cnt = 1;
    else if(pre[i] == ma[i].val)
      ma[i].cnt++;
  }

  pair<long long, long long> res = {-1e18, 0};

  for(int i = 2; i <= n; i++){
    long long cur = ma[i - 1].val - suf(i);
    if(cur > res.val)
      res.val = cur,
      res.cnt = ma[i - 1].cnt;

    else if(cur == res.val)
      res.cnt += ma[i - 1].cnt;

    cur = suf(i) - mi[i - 1].val;
    if(cur > res.val)
      res.val = cur,
      res.cnt = mi[i - 1].cnt;
    else if(cur == res.val)
      res.cnt += mi[i - 1].cnt;
  }

  cout << res.val << ' ' << (res.val ? res.cnt : res.cnt >> 1);
}
