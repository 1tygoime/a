#include <bits/stdc++.h>
using namespace std;

bool d[256];
string s;

void del_sp(){
  string s1 = "";
  for(const char &c: s) if(c != ' ') s1.push_back(c);
  s = s1;
}

void get(){
  string s1 = "";
  for(int i = 0; i < (int)s.size(); i++)
    if(!d[i]) s1 += s[i];
  s = s1;
}

void del_1(){
  stack<pair<char, int>> st;
  memset(d, 0, sizeof(d));

  for(int i = 0; i < (int)s.size(); i++)
    if(s[i] == ')'){
      bool ex = 0;

      while(!st.empty() && st.top().first != '('){
        if(st.top().first == '+' || st.top().first == '-') ex = 1;
        st.pop();
      }

      if(!ex) d[st.top().second] = 1, d[i] = 1;
      auto top = st.top();
      st.pop();

    }
    else st.push({s[i], i});

  get();
}

void del_2(){
  stack<pair<char, int>> st;
  memset(d, 0, sizeof(d));

  for(int i = (int)s.size() - 1; i >= 0; i--)
    if(s[i] == '('){
      bool ok = i == 0 || s[i - 1] != '-';

      while(!st.empty() && st.top().first != ')') st.pop();

      auto top = st.top(); st.pop();
      if(ok) d[top.second] = 1, d[i] = 1;

    }
    else st.push({s[i], i});

  get();
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  for(cin >> n, cin.ignore(); n--; ){
    getline(cin, s);

    del_sp();
    del_1();
    del_2();

    cout << s << '\n';
  }
}
