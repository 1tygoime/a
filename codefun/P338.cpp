#include <bits/stdc++.h>
using namespace std;

int k, n, cnt;

void Try(int i, int curr){
  if(i >= k){
    cnt++;
    return;
  }
  for(int j = curr; j >= 1; j--) Try(i + 1, j);
}

int main(){
  cin >> k >> n;
  for(int i = n; i >= 1; i--) Try(1, i);
  cout << cnt;
}
