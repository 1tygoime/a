#include<bits/stdc++.h>
using namespace std;

int a[1000001];

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  int m1 = 0, m2 = 0, p1 = -1, p2 = 0;

  for(int l = 1, r = 1; l <= n; ++l){
    while(r <= n && a[l] + m > a[r])
      ++r;

//    cout << "[" << l << ", " << r << "]" << endl;

    if(r - l == m1)
      p2 = l,
      m2 = r - l;
    else if(r - l > m1)
      p1 = r,
      m1 = r - l;
  }

//  cout << m1 << ' ' << m2 << ' ' << p1 << ' ' << p2 << endl;

  if(m1 != m2)
    return cout << m1 - 1, 0;

  if(p2 <= p1)
    return cout << m1 - 1, 0;

  cout << m1;

  return 0;
}

/*
6 3
1 2 2 3 3 4
*/
