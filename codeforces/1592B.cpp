#include<bits/stdc++.h>
using namespace std;

int a[100001];
pair<int, int> b[100001];

void orz_HuuDuc(){
  int n, x;
  cin >> n >> x;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++)
    b[i] = {a[i], i};

  if(is_sorted(a + 1, a + 1 + n)){
    cout << "YES\n";
    return;
  }

  if(x >= n){
    cout << "NO\n";
    return;
  }

  sort(b + 1, b + 1 + n);

  for(int i = 1; i <= n; i++){
    auto [val, pos] = b[i];

    //cant be change
    if(i - 1 < x && n - i < x)
      if(a[i] != val){
        cout << "NO\n";
        return;
      }
  }

  cout << "YES\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    orz_HuuDuc();

  return 0;
}
