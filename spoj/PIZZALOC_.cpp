#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int k, r, m, n;
pair <int, int> pizza[20], house[100];
int ppl[100];

vector <int> X;
int res;

void process(){
  int cnt = 0;
  for(int i = 0; i < n; i++)
    for(const int &j: X)
      if((house[i].x - pizza[j].x) * (house[i].x - pizza[j].x) + (house[i].y - pizza[j].y) * (house[i].y - pizza[j].y) <= r * r){
        cnt += ppl[i];
        break;
      }
  res = max(res, cnt);
}

void Try(int i, int j){
  for(; j < m - k + i; j++){
    X.push_back(j);
    if(i == k)
      process();
    else
      Try(i + 1, j + 1);
    X.pop_back();
  }
}

int main(){
  cin >> k >> r >> m;

  for(int i = 0; i < m; i++)
    cin >> pizza[i].x >> pizza[i].y;

  cin >> n;

  for(int i = 0; i < n; i++)
    cin >> house[i].x >> house[i].y >> ppl[i];

  Try(1, 0);

  cout << res << '\n';
}
