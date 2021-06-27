#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int a[50001], b[50001], m, n, k;

priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> pq;

int main(){
  int m, n, k;
  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) cin >> b[i];

  sort(a + 1, a + 1 + m);
  sort(b + 1, b + 1 + n);

  for(int i = 1; i <= n; i++)
    pq.push({a[1] + b[i], 1});

  while(k--){
    pair <int, int> top = pq.top(); pq.pop();
    cout << top.f << '\n';
    if(top.s < m){
      top.f -= a[top.s], top.s++;
      top.f += a[top.s]; pq.push(top);
    }
  }
}
