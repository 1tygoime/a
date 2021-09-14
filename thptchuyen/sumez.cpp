#include <bits/stdc++.h>
using namespace std;

template <typename T> inline void read(T &x){
  char c;
  bool nega = 0;

  while( (!isdigit(c = getchar())) && (c != '-'));

  if(c == '-'){
    nega = 1;
    c = getchar();
  }

  x = c - 48;

  while(isdigit(c = getchar()))
    x = x * 10 + c - 48;

  if(nega) x = -x;
}
template <typename T> inline void writep(T x){
  if(x > 9)
    writep(x / 10);

  putchar(x % 10 + 48);
}
template <typename T> inline void write(T x){
  if(x < 0){
    putchar('-');
    x = -x;
  }

  writep(x);
}

const long long mod = 1e9;

int main(){
  long long res = 0;
  int n;
  read(n);

  while(n--){
    long long x;
    read(x);
    x %= mod;
    if(x < 0) x += mod;
    res = (res % mod + x % mod) % mod;
  }

  write(res + 7);
}
