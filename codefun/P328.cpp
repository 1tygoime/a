
#include <bits/stdc++.h>
using namespace std;

int n, cnt;

void Try(int i){
  if(i >= n){
    if(i == n) cnt++;
    return;
  }
  Try(i + 1);
  Try(i + 2);
}

int main(){
  cin >> n;
  Try(1);
  cout << cnt;
}
