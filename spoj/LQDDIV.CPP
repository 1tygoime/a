#include <bits/stdc++.h>
using namespace std;

int n, split;
long long s_a, temp_s, cnt, min_dif = LLONG_MAX;
vector <long long> a, X;

void getX(int i){
  for(int j = 0; j <= 1; j++){
    temp_s += j * a[i];
    if(i == split) X.push_back(2 * temp_s);
    else getX(i + 1);
    temp_s -= j * a[i];
  }
}

void pro(){
  long long Y = 2 * temp_s;
  if(s_a < Y) return;
  long long x = *(upper_bound(X.begin(), X.end(), s_a - Y) - 1);
  if(s_a - x - Y < min_dif)
    min_dif = s_a - x - Y,
    cnt = upper_bound(X.begin(), X.end(), x) - lower_bound(X.begin(), X.end(), x);
  else if(s_a - x - Y == min_dif)
    cnt += upper_bound(X.begin(), X.end(), x) - lower_bound(X.begin(), X.end(), x);
}

void getY(int i){
  for(int j = 0; j <= 1; j++){
    temp_s += j * a[i];
    if(i == n - 1) pro();
    else getY(i + 1);
    temp_s -= j * a[i];
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++){
    long long x;
    cin >> x;
    a.push_back(x);
    s_a += x;
  }

  split = n / 2;

  getX(0);
  sort(X.begin(), X.end());
  getY(split + 1);

  cout << min_dif << ' ' << (!min_dif ? cnt / 2 : cnt);
}
