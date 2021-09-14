#include<bits/stdc++.h>
using namespace std;

long long f(long long x, long long y){
  return x * 10 % y;
}

int main(){
  long long x, y;
  cin >> x >> y;

  long long tortoise = x, hare = x;

  while(1){
    tortoise = f(tortoise, y);
    hare = f(f(hare, y), y);

    if(tortoise == hare)
      break;
  }

  long long p = x % y;

  cout << x / y << '.';

  while(p != tortoise){
    cout << p * 10 / y;
    p = f(p, y);
    tortoise = f(tortoise, y);
  }

  cout << '(';

  while(1){
    cout << p * 10 / y;
    p = f(p, y);
    if(p == tortoise)
      break;
  }

  cout << ')';

  return 0;
}
