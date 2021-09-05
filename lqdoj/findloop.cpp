#include<bits/stdc++.h>
using namespace std;

long long a, b, c;

long long f(long long x){
  return (a * x + x / b) % c;
}

int main(){
  cin >> a >> b >> c;

  long long tortoise = 1, hare = 1;
  while(1){
    tortoise = f(tortoise);
    hare = f(f(hare));
    if(tortoise == hare) break;
  }

  long long mu = 0, p = 1;
  while(tortoise != p){
    p = f(p);
    tortoise = f(tortoise);
    ++mu;
  }

  long long lamb = 0;
  while(1){
    ++lamb;
    p = f(p);
    if(tortoise == p) break;
  }

  cout << mu + lamb;
}
