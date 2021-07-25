#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ){
    string s;
    cin >> s;

    map<char, int> c;

    for(int i = 0; i < s.size(); i++) c[s[i]]++;


    int p1 = 0, p2 = 0;
    for(auto &[x, y]: c){
      if(y >= 2) p1++, p2++;
//      else if(i <= 0) continue;
      else {
        int m = min(p1, p2);

        if(m == p1) p1++; else p2++;
      }
    }

    p1 = min(p1, p2);
    cout << p1 << '\n';
  }
}
