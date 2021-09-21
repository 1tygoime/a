#include<bits/stdc++.h>
using namespace std;

string tmp;
int n;
char a[105];
vector<string> res;

void orz_aduc(int i, int op, int cl){
  if(res.size() == n) return;

  if(i == (n << 1) + 1){
    tmp = "";
    for(int j = 1; j <= 2 * n; j++) tmp.push_back(a[j]);
    res.push_back(tmp);
    return;
  }
  else{
    if(op < n){
      a[i] = '(';
      orz_aduc(i + 1, op + 1, cl);
    }

    if(cl < op){
      a[i] = ')';
      orz_aduc(i + 1, op, cl + 1);
    }
  }
}

void orz_huuduc(){
  cin >> n;

  res.clear();
  tmp = "";
  orz_aduc(1, 0, 0);

  for(auto i: res)
    cout << i << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_huuduc();

  return 0;
}
