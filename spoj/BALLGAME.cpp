#include <bits/stdc++.h>
using namespace std;

struct ball{
  int st, en;
  char name;
  bool operator <(const ball &i){
    return st < i.st;
  }
} a[100001];
int n, m;


int main(){
  cin >> n >> m;
  for(int i = 1; i <= m; i++)
    cin >> a[i].name >> a[i].st >> a[i].en,
    a[i].en += a[i].st;

  sort(a + 1, a + 1 + m);

  for(int i = 1; i <= m; i++)

  return 0;
}
