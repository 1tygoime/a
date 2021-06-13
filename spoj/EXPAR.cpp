#include <bits/stdc++.h>
using namespace std;

stack<int> st;
stack<char> op;

int priority(char ope){
  if(ope == '*') return 2;
  return 1; //+, -
}

void proc(char ope){
  int b = st.top(); st.pop();
  int a = st.top(); st.pop();

  int val;
  if(ope == '+') val = a + b;
  else if(ope == '-') val = a - b;
  else if(ope == '*') val = a * b;
  val &= 1; if(val < 0) val = (val + 2) & 1;

  st.push(val);
}

int main(){
  string s, x, y;
  cin >> s >> x >> y;

  for(int i = 0; i < s.size(); i++)

    if(isdigit(s[i])){
      string num = "";
      while(i < s.size() && isdigit(s[i])) num.push_back(s[i++]);
      st.push((num.back() - '0') & 1); i--;
    }

    else if(s[i] == 'x') st.push(int(x == "Odd"));

    else if(s[i] == 'y') st.push(int(y == "Odd"));

    else{
      while(!op.empty() && priority(op.top()) >= priority(s[i])){
        proc(op.top());
        op.pop();
      }
      op.push(s[i]);
    }

  while(!op.empty()){
    proc(op.top());
    op.pop();
  }
  st.top() &= 1; if(st.top() < 0) st.top() = (st.top() + 2) & 1;
  cout << (st.top() ? "Odd": "Even");

}
