#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long l[3 * N], r[3 * N];
int a[3 * N];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= 3 * n; i++)
    cin >> a[i];

  multiset<int> s;
  long long cur = 0;

  for(int i = 1; i <= 3 * n; i++){
    cur += a[i];
    s.insert(a[i]);

    while(s.size() > n){
      cur -= *s.begin();
      s.erase(s.begin());
    }

    l[i] = cur;
  }

  cur = 0;
  s.clear();

  for(int i = 3 * n; i >= 1; i--){
    cur += a[i];
    s.insert(a[i]);

    while(s.size() > n){
      cur -= *s.rbegin();
      s.erase(s.find(*s.rbegin()));
    }

    r[i] = cur;
  }

//  for(int i = 1; i <= 3 * n; i++)
//    cout << l[i] << ' ' << r[i] << endl;
//  cout << endl;

  cur = -1e18;
  for(int i = n; i <= 2 * n; i++)
    cur = max(cur, l[i] - r[i + 1]);

  cout << cur;
}
