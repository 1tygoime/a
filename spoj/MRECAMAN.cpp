#include <bits/stdc++.h>
using namespace std;

int a[500001];
set<int> s;

int main(){
  for(int i = 1; i <= 500000; i++){
    if(a[i - 1] - i <= 0) a[i] = a[i - 1] + i;
    else if(s.count(a[i - 1] - i)) a[i] = a[i - 1] + i;
    else a[i] = a[i - 1] - i;
    s.insert(a[i]);
  }

  int k;
  for(cin >> k; k != -1; cin >> k) cout << a[k] << '\n';
}