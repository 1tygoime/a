#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a, b, c;
  cin >> a >> b >> c;
  if(b - a == c - b) cout << c + c - b;
  else if(a && b && c && b * b == a * c) cout << c * (c / b);
//  cout << (b * b == a * c);
}
