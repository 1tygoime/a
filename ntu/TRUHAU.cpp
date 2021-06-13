#include <bits/stdc++.h>
using namespace std;

string post_to_in(string s){
  stack <string> st;

  for(const char &c: s)
    if(isalpha(c) || isdigit(c)) st.push(string(1, c));
    else{
      string s1 = st.top(); st.pop();
      string p = "(" + st.top() + c + s1 + ")";
      st.pop(); st.push(p);
    }

  return st.top();
}

#define isvar(c) (isalpha(c) || isdigit(c))
#define sp(s) s.push_back(' ')

int priority(char op){
  if(op == '^') return 3;
  else if(op == '*' || op == '/' || op == '%') return 2;
  else if(op == '+' || op == '-') return 1;
  return 0;
}

string in_to_post(string s){
  stack <char> op;
  string res = "";

  for(int i = 0; i < (int)s.size(); i++)
    if(isvar(s[i])){
      string var = "";
      while(i < (int)s.size() && isvar(s[i])) var.push_back(s[i++]);
      i--; res += var;
      sp(res);
    }

    else if(s[i] == '(') op.push('(');

    else if(s[i] == ')'){
      while(!op.empty() && op.top() != '(')
        res.push_back(op.top()), sp(res), op.pop();
      if(!op.empty()) op.pop();
    }

    else{
      while(!op.empty() && priority(op.top()) >= priority(s[i]))
        res.push_back(op.top()), sp(res), op.pop();
      op.push(s[i]);
    }

  while(!op.empty()) res.push_back(op.top()), sp(res), op.pop();

  return res;
}

int main(){
  string s;
  cin >> s;
  cout << in_to_post(s);

  return 0;
}
