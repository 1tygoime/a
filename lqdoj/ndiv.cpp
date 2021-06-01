#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;

int c[MAX + 1];

int main(){
  for(int i = 1; i <= MAX; i++)
    for(int j = i; j <= MAX; j += i) c[j]++;

  for(int i = 1; i <= MAX; i++) c[i] += c[i - 1];

  int qry;
  for(cin >> qry; qry--; ){
    int L, R;
    cin >> L >> R;
    cout << c[R] - c[L - 1] << '\n';
  }
  return 0;
}
