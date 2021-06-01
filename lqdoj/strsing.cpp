#include <iostream>
using namespace std;

string s;
int res, d[256];

int main(){
  cin >> s;
  int n = s.size(); s = ' ' + s;
  for(int i = 1, j = 1; i <= n; i++){
    while(j <= n && d[s[j]] < 1) d[s[j++]]++;
    d[s[i]]--;
    res = max(res, j - i);
  }
  cout << res;
}
