#include <bits/stdc++.h>
using namespace std;

string s;
stack <int> st;

int v(char c){
  if(c == 'H') return 1;
  else if(c == 'C') return 12;
  return 16;
}

int main(){
  cin >> s;

  for(const char &c: s){
    if(c == '(') st.push(0);

    else if(c == ')'){
      int val = 0;
      while(st.top()) val += st.top(), st.pop();
      st.pop(), st.push(val);
    }

    else if(isdigit(c)){
      int val = st.top(); st.pop();
      st.push(val * (c - '0'));
    }

    else st.push(v(c));
  }

  while(st.size() > 1){
    int v = st.top(); st.pop();
    st.top() += v;
  }

  cout << st.top();
}
