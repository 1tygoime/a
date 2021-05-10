#include<bits/stdc++.h>
using namespace std;

int res = INT_MAX, n;
pair <int, int> a[50];

void Try(int i, int cnt, int chua, int cay){
  if(i >= n){
    if(cnt) res = min(res, abs(chua - cay));
    return;
  }
  Try(i + 1, cnt + 1, chua * a[i].first, cay + a[i].second);
  Try(i + 1, cnt, chua, cay);
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
  Try(0, 0, 1, 0);
  cout << res;
}
