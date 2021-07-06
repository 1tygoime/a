#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  cout << (1LL * a * a > 1LL * b * b ? a : b);
}
