#include <bits/stdc++.h>
using namespace std;

string chars[26];

int main(){
  string s;
  cin >> s;
  int len = s.size(), impCnt = 0;
  for(int i = 0; i < len; i++) chars[s[i] - 'A'] += s[i];
  string out = "";
  string wait;
  for(char i = 0; i < 26; i++)
    if(chars[i].size() % 2){
      impCnt++;
      wait = chars[i];
      if(impCnt > 1){
        cout << "NO SOLUTION";
        return 0;
      }
    } else if (chars[i].size() > 0) out.insert(out.size() / 2, chars[i]);
  out.insert(out.size() / 2, wait);
  cout << out;
}
