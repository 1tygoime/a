#include<bits/stdc++.h>
using namespace std;

long long a[200005];

long double eps = 1e-9;

void orz_HuuDuc(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  long long s = accumulate(a + 1, a + 1 + n, 0LL);
  long double cur = 1.0 * s - 1.0 * s * (n - 2) / n;

//  cout << cur << endl;

  sort(a + 1, a + 1 + n);

  long long res = 0;

  for(int i = 1; i <= n; i++){
    int L = 1, R = i - 1, fpos = -1, lpos = -1;

    long double curr = cur - a[i];

    while(L <= R){
      int M = (L + R) / 2;
      if(abs(a[M] - curr) <= eps){
        fpos = M,
        R = M - 1;
      }
      else if(a[M] > curr) R = M - 1;
      else if(a[M] < curr) L = M + 1;
    }

    L = 1, R = i - 1;

    while(L <= R){
      int M = (L + R) / 2;
      if(abs(a[M] - curr) <= eps){
        lpos = M,
        L = M + 1;
      }
      else if(a[M] > curr) R = M - 1;
      else if(a[M] < curr) L = M + 1;
    }


//    cout << fpos << " " << lpos << endl;
    if(fpos == -1 || lpos == -1)
      continue;
    res += lpos - fpos + 1;
  }

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
