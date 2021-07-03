
#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector <int> q, p;
  int n, times = 0, a, b;
  for(cin >> n >> a; a--; ){
    int x;
    cin >> x;
    q.push_back(x);
  }
  for(cin >> b; b--; ){
    int x;
    cin >> x;
    p.push_back(x);
  }
  while(q.size() > 0 && p.size() > 0 && times < 10000){
    times++;
    if(q.front() > p.front()){
      q.push_back(p.front());
      p.erase(p.begin());
      q.push_back(q.front());
      q.erase(q.begin());
    } else{
      p.push_back(q.front());
      q.erase(q.begin());
      p.push_back(p.front());
      p.erase(p.begin());
    }
  }
  if(p.empty()) cout << times << ' ' << "1\n";
  else if(q.empty()) cout << times << ' ' << "2\n";
  else cout << "-1\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
  return 0;
}
