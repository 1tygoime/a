#include <bits/stdc++.h>
using namespace std;

stack <long long> st;

void proc(char op){
  long long b = st.top(); st.pop();
  long long a = st.top(); st.pop();

  if(op == '+') st.push(a + b);
  else if(op == '-') st.push(a - b);
  else if(op == '*') st.push(a * b);
}

int main(){
  string s;
  getline(cin, s);

  for(int i = 0; i < s.size(); i++){
    if(s[i] == ' ') continue;

    if(isdigit(s[i])){
      long long num = 0;
      while(i < s.size() && isdigit(s[i])) num = num * 10 + s[i++] - '0';
      st.push(num);
    }

    else proc(s[i]);

  }

  cout << st.top();
}
