  #include <bits/stdc++.h>
  using namespace std;

  int main(){
    int res = 0, n, k;
    cin >> n >> k;

    stack <int> s; s.push(n);

    while(!s.empty()){
      int x = s.top(); s.pop();
      if(x <= k || (x + k) & 1 || (x - k) & 1) ++res;
      else s.push((x + k) >> 1), s.push((x - k) >> 1);
    }

    cout << res;
  }
