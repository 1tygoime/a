#include <bits/stdc++.h>
using namespace std;

int a[200001];

void solve(){
  map <int, int> c;

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> a[i];
    c[a[i]]++;
  }

  sort(a + 1, a + 1 + n);
  int mindist = 1e9, one = -1, two = -1, one_pos = -1, two_pos = -1;
  for(int i = 1; i < n; i++){
    if(abs(a[i] - a[i + 1]) < mindist) mindist = abs(a[i] - a[i + 1]), one = a[i], one_pos = i, two = a[i + 1], two_pos = i + 1;
  }

  cout << one << ' ';
  for(int i = two_pos + 1; i <= n; i++) cout << a[i] << ' ';
  for(int i = 1; i < one_pos; i++) cout << a[i] << ' ';
  cout << two << '\n';

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
