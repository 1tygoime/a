#include <bits/stdc++.h>
using namespace std;

vector <int> tail;

bool cmp(int a, int b){
  return a > b;
}

int main(){
  int n, x;
  for(cin >> n; n--; ){
    cin >> x;
    if(tail.empty() || x < tail.back()) tail.push_back(x);
    else if(x > tail[0]) tail[0] = x;
    else *lower_bound(tail.begin(), tail.end(), x, cmp) = x;
  }
  cout << tail.size();
}
