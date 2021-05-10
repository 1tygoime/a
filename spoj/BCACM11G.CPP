#include <bits/stdc++.h>
using namespace std;

int k, n, a[105], cnt;

void Try(int i, int c){
  if(c == k){
    cnt++;
    return;
  }
  for(int j = i + 1; j < n; j++)
    if(a[j] > a[i]) Try(j, c + 1);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tt;
  for(cin >> tt; tt--; ){
    cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
      cin >> a[i];
    for(int i = 0; i < n; i++) Try(i, 1);
    cout << cnt << '\n';
  }
}
