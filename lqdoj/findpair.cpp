#include<bits/stdc++.h>
using namespace std;

int a[1000001];

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  int i = 1, j = n;
  while(i < j)
    if(a[i] + a[j] == m){
      cout << i << ' ' << j;
      return 0;
    }
    else if(a[i] + a[j] < m) ++i;
    else --j;

  cout << "No solution";
}
