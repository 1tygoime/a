///TLE

#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

const int INF = 1e9;

struct heap{
  multiset<int> l, r;
  int median(){
    return min(l.empty() ? INF : *l.rbegin(), r.empty() ? INF : *r.begin());
  }

  void balance(){
    while(l.size() > r.size()){
      int x = *l.rbegin();
      l.erase(l.find(x));
      r.insert(x);
    }
    while(r.size() > l.size()){
      int x = *r.begin();
      r.erase(r.find(x));
      l.insert(x);
    }
  }

  void ins(int x){
    if(!l.empty() && *(l.rbegin()) >= x) l.insert(x);
    else r.insert(x);

    balance();
  }

  void del(int x){
    auto it = l.find(x);
    if(it != l.end()) {
      l.erase(it);
      balance();
      return;
    }

    it = r.find(x);
    if(it != r.end()) r.erase(it);

    balance();
  }

  void display(){
    cout << "-----------------" << '\n';
    if(l.empty() && r.empty()){
      cout << "Empty heap" << endl;
      return;
    }
    for(int i: l) cout << i << ' ';
    cout << "->";
    for(int i: r) cout << i << ' ';
    cout << '\n';
    cout << "-----------------" << '\n';
  }
} pq;

int main(){
  int q;
  scanf("%d", &q);

  while(q--){
    char qry;
    int x;
    scanf(" %c %d", &qry, &x);

//    cout << qry << " " << x << endl;

    if(qry == '+')
      pq.ins(x);
    else
      pq.del(x);

    printf("%d\n", pq.median());

//    pq.display();
  }

  return 0;
}
