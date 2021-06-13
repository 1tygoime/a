#include<bits/stdc++.h>
using namespace std;

const int nMax = 1e6;
bool pr[nMax + 5];
vector <int> prime;

string int_to_str(int x){
  string res = "";
  while(x){
    res = char(x % 10 + '0') + res;
    x /= 10;
  }
  return res;
}

int main(){
  for(int i = 2; i * i <= nMax; i++)
    if(!pr[i]) for(int j = i * i; j <= nMax; j += i) pr[j] = 1;
  for(int i = 2; i <= nMax; i++) if(!pr[i]) prime.push_back(i);

  int n, k;
  cin >> n >> k;

  string res = "";
  for(int i = 0; i < n; i++) res += int_to_str(prime[i]);
//  cout << res << endl;

  stack<char> st;
  for(int i = 0; i < res.size(); i++)
    if(st.empty()) st.push(res[i]);
    else{
      while(!st.empty() && st.top() < res[i] && k > 0) st.pop(), --k;
      st.push(res[i]);
    }

  while(!st.empty() && k > 0)
    st.pop(), --k;

  res = "";
  while(!st.empty())
    res = st.top() + res,
    st.pop();

  cout << res;

}
