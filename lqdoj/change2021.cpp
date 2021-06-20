#include <bits/stdc++.h>
using namespace std;

int main(){
  string s = "12345678", req;
  cin >> req;
  for(const char &c: req){
    if(c == 'L') s = s.substr(1, 7) + s.front();
    else s = s.back() + s.substr(0, 7);
  }

  cout << s;
}
