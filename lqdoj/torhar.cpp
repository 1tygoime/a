#include<bits/stdc++.h>
using namespace std;

long long f(long long x, long long y){
  return x % y * 10;
}

int main(){
  long long x, y;
  cin >> x >> y;

  long long tortoise = x, hare = x;

  while(1){
    tortoise = f(tortoise, y);
    hare = f(f(hare, y), y);

//    cout << tortoise << ' ' << hare << endl;

    if(tortoise == hare)
      break;
  }

  long long mu = 0, p = x;
  while(p != tortoise){
    p = f(p, y);
    tortoise = f(tortoise, y);
    ++mu;
  }

  long long lambda = 0;
  while(1){
    ++lambda;
    p = f(p, y);
    if(p == tortoise)
      break;
  }

//  cout << mu << endl;

  cout << x / y << '.';
  while(--mu)
    x = f(x, y),
    cout << x / y;

  cout << '(';
  while(lambda--)
    x = f(x, y),
    cout << x / y;
  cout << ')';

  return 0;
}
