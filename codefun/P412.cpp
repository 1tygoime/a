
#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a, b, c;
  cin >> a >> b >> c;
  if(b - a == c - b) cout << '+';
  else if(a && b && c && b * b == a * c) cout << '*';
//  cout << (b * b == a * c);
}
