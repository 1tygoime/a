#include <bits/stdc++.h>
using namespace std;

struct job{
  int time, dead, pos;
  bool operator <(const job &i) const{
    if(dead != i.dead) return dead < i.dead;
    return time < i.time;
  }
} a[100001];

int n; bool ok[100001];
priority_queue<pair<int, int>> pq; //{time, pos}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i].time, a[i].pos = i;
  for(int i = 1; i <= n; i++) cin >> a[i].dead;

  sort(a + 1, a + 1 + n);

  int curr = 0;
  for(int i = 1; i <= n; i++){
    curr += a[i].time;
    pq.push({a[i].time, i});
    if(curr > a[i].dead){
      auto top = pq.top(); pq.pop();
      curr -= top.first;
    }
  }

  cout << n - pq.size() << '\n';

  while(!pq.empty())
    ok[pq.top().second] = 1,
    pq.pop();

  for(int i = 1; i <= n; i++) if(ok[i]) cout << a[i].pos << ' ';
  for(int i = 1; i <= n; i++) if(!ok[i]) cout << a[i].pos << ' ';
}
