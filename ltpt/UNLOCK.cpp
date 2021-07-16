#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6;

bool p[MAX + 5];
int c[MAX + 5];
int n;

int main(){
  long long res = 0; p[0] = p[1] = 1;

  for(int i = 2; i * i <= MAX; i++)
    if(!p[i])
      for(int j = i * i; j <= MAX; j += i) p[j] = 1;

  //cout << p[15] << endl << p[5] << endl;

  for(cin >> n; n--; ){
    int x;
    cin >> x;
    c[x]++;
  }

  for(int i = 2; i <= MAX; i++){
    if(!p[i]) res += 1LL * c[i] * (c[i] - 1) / 2;
    if(sqrt(i) == int(sqrt(i)) && !p[(int)sqrt(i)])
      res += 1LL * c[1] * c[i];
  }

  cout << res;

  return 0;
}
