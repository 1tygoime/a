#include<bits/stdc++.h>
using namespace std;

int a[1000], ress;

void f(int i){
  if(a[i] > a[i + 1]) swap(a[i], a[i + 1]);
}

void solve(){
  ress = 0;
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) cin >> a[i];

  bool sorted = 1;
  for(int _ = 1; ; _++){
    sorted = 1;
    for(int i = 2; i <= n; i++){
      if(a[i] < a[i - 1]){
        sorted = 0;
        break;
      }
    }

    if(sorted) break;

    ++ress;

    if(_ & 1)
      for(int i = 1; i <= n - 2; i += 2) f(i);
    else
      for(int i = 2; i <= n - 1; i += 2) f(i);
  }


  cout << ress << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}

