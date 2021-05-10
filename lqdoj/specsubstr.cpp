#include<bits/stdc++.h>
using namespace std;

long long ng, ph;
long long res;
string s;

int main(){
  cin >> s;
  for(const char &c : s){
    if(c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u')
      res += ph, ng++;
    else res += ng, ph++;
  }
  cout << res;
  return 0;
}
