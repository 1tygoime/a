#include <bits/stdc++.h>
using namespace std;

unsigned long long res = 2;
int n;

int main(){
  cin >> n;
  for(int i = 2; i <= n; i++) res *= 2ULL;
  cout << res;
}
