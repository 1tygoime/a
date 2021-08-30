#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int pos0 = -1;
  for(int i = (int)s.size() - 1; i >= 0; i--)
    if(s[i] == '0'){
      pos0 = i;
      break;
    }

  if(pos0 == -1){
    cout << 1;
    for(int i = 0; i < s.size(); i++) cout << 0;
    return 0;
  }

  for(int i = pos0; i < s.size(); i++) s[i] = '0';
  s[pos0] = '1';

  cout << s;
}

