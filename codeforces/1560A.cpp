#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for(int i = 1; i <= 100000; i++){
    if(v.size() > 1000) break;

    if(i % 3 == 0|| i % 10 == 3 ) continue;

    v.push_back(i);
  }

  int t;
  for(cin>>t; t--; ){
    int x;
    cin >> x;
    cout << v[--x] << '\n';
  }
}
