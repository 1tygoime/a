#include<bits/stdc++.h>
using namespace std;

char ok[20];

int main(){
  int n, resLen = 0;
  for(cin >> n; n--; ){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) ok[i] ^= s[i];
    resLen ^= s.size();
  }
  if(!resLen) return !(cout << -1);
  for(int i = 0; i < resLen; i++) cout << ok[i];
  return 0;
}
