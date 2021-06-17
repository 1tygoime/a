#include<bits/stdc++.h>
using namespace std;

int mx, n;
stack<int> st;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  for(cin >> n; n--; ){
    int x;
    cin >> x;

    if(x < mx){
      if(st.empty()) continue;
      if(!st.empty() && st.top() == x) st.pop();
      else return !(cout << "YES");
    }

    else{
      for(int i = mx + 1; i < x; i++) st.push(i);
      mx = x;
    }


  }

  cout << "NO";
}
