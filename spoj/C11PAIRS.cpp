#include <bits/stdc++.h>
using namespace std;

long long res;
map <int, int> c; //c[x] = amount of x before i(i = 1 -> n)
stack <int> st;

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;

    //{st.top(); x}
    while(!st.empty() && st.top() < x){
      res++;
      c[st.top()]--;
      st.pop();
    }

    if(!st.empty()){
      if(st.top() == x){
        int sz = st.size() - c[x];
        res += c[x] + (sz >= 1);
      }
      else res++;
    }

    st.push(x);
    c[x]++;
  }

  cout << res;
}
