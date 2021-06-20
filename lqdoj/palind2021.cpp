#include <bits/stdc++.h>
using namespace std;

void maximize(string &s1, string s2){
  if(s1.size() < s2.size()) s1 = s2;
  else if(s1.size() != s2.size()) return;

//  cout << s1 << ' ' << s2 << endl;

  s1 = max(s1, s2);
}

int main(){
  string s, res = "";
  int mxlen = 0; bool has0 = 1;
  cin >> s;
  int n = s.size(); s = ' ' + s;

  for(int i = 1; i <= n; i++){
    if(s[i] != '0') has0 = 0;

    string s1;
    int start = -1;

    for(int left = i, right = i; left >= 1 && right <= n; left--, right++){
      if(s[left] != s[right]) break;

      if(s[left] == '0') continue;

      if(mxlen <= right - left + 1)
        mxlen = right - left + 1, start = left;
    }
    if(start != -1)
      s1 = s.substr(start, mxlen);

//    cout << s1 << endl;
    maximize(res, s1);

    start = -1; s1 = "";

    for(int left = i, right = i + 1; left >= 1 && right <= n; left--, right++){
      if(s[left] != s[right]) break;

      if(s[left] == '0') continue;

      if(mxlen <= right - left + 1)
        mxlen = right - left + 1, start = left;
    }
    if(start != -1)
      s1 = s.substr(start, mxlen);
    maximize(res, s1);
  }

  if(has0) cout << 1 << '\n' << 0;
  else cout << res.size() << '\n' << res;
}
