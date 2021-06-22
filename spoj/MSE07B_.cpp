#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

priority_queue<pii> pq_max; // heap max, store {priority, customer}
priority_queue<pii, vector<pii>, greater<pii>> pq_min; // heap min

int c[1000001];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k, p;
  for(cin >> n; n; cin >> n){
    if (n == 1){
      cin >> k >> p;

      pq_max.push({p, k});
      pq_min.push({p, k});
      c[k]++;
    }

    else if (n == 2)
      if(pq_max.empty()) cout << "0\n";
      else{
        if(c[pq_max.top().second])
          cout << pq_max.top().second << '\n',
          c[pq_max.top().second]--,
          pq_max.pop();

        else{
          while(!pq_max.empty() && !c[pq_max.top().second]) pq_max.pop();

          if(!pq_max.empty())
            cout << pq_max.top().second << '\n',
            c[pq_max.top().second]--,
            pq_max.pop();

          else cout << "0\n";
        }
      }

    else{
      if(pq_min.empty()) cout << "0\n";
      else{
        if(c[pq_min.top().second])
          cout << pq_min.top().second << '\n',
          c[pq_min.top().second]--,
          pq_min.pop();

        else{
          while(!pq_min.empty() && !c[pq_min.top().second]) pq_min.pop();

          if(!pq_min.empty())
            cout << pq_min.top().second << '\n',
            c[pq_min.top().second]--,
            pq_min.pop();

          else cout << "0\n";
        }
      }
    }
  }

	return 0;
}
