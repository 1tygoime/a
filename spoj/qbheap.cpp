#include <bits/stdc++.h>
using namespace std;

priority_queue <int> p;
string s;

int main(){
  while(cin >> s){
    if(s[0] == '+') {if(p.size() < 15000) p.push(stoi(s));}
    else if(!p.empty()){
      int ma = p.top();
      while(p.top() == ma && !p.empty()) p.pop();
    }
  }
  vector <int> ok;
//  cout << p.size() << '\n';
  while(!p.empty()){
    int ma = p.top();
    while(p.top() == ma && !p.empty()) p.pop();
    ok.push_back(ma);
//    p.pop();
  }
  cout << ok.size() << '\n';
  for(const int &i: ok) cout << i << '\n';
}
