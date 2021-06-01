#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

int c[MAX + 1], p[MAX + 1];

int main(){
  for(int i = 2; i * i <= MAX; i++)
    if(!p[i]) for(int j = i * i; j <= MAX; j += i) if(!p[j]) p[j] = i;
  for(int i = 2; i <= MAX; i++){
    if(!p[i]) p[i] = i;
    c[p[i]]++;
  }

  int qry;
  for(cin >> qry; qry--; ){
    int L;
    cin >> L; cout << (L > MAX ? 0 : c[L]) << '\n';
  }
  return 0;
}

