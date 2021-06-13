#include <bits/stdc++.h>
using namespace std;

stack<long long> st;
stack<char> op;

int priority(char ope){
  if(ope == '*' || ope == '/') return 2;
  else if(ope == '+' || ope == '-') return 1; //+, -
  return 0; // ( )
}

void proc(char ope){
  long long b = st.top(); st.pop();
  long long a = st.top(); st.pop();

  if(ope == '+') st.push(a + b);
  else if(ope == '-') st.push(a - b);
  else if(ope == '*') st.push(a * b);
  else st.push(a / b);
}

void solve(){
  string s;
  cin >> s;

  while(!st.empty()) st.pop();
  while(!op.empty()) op.pop();

  for(int i = 0; i < s.size(); i++)
    if(isdigit(s[i])){
      long long num = 0;
      while(i < s.size() && isdigit(s[i])) num = num * 10 + s[i++] - '0';
      st.push(num); i--;
    }

    else if(s[i] == '(') op.push('(');
    else if(s[i] == ')'){
      while(!op.empty() && op.top() != '('){
        proc(op.top()); op.pop();
      }
      if(!op.empty()) op.pop();
    }

    else{
      while(!op.empty() && priority(op.top()) >= priority(s[i])){
        proc(op.top()); op.pop();
      }
      op.push(s[i]);
    }

  while(!op.empty()){
    proc(op.top()); op.pop();
  }

  cout << st.top() << '\n';
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();
  return 0;
}
