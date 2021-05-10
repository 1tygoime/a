#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int n;
ull money, cnt;
pair <ull, ull> cow[100005];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> money;
  for(int i = 0; i < n; i++) cin >> cow[i].first >> cow[i].second;

  sort(cow, cow + n);
  for(int i = 0; i < n; i++)
    if (money >= cow[i].first * cow[i].second)
      cnt += cow[i].second,
      money -= cow[i].first * cow[i].second;
    else{
      cnt += money / cow[i].first;
      break;
    }

  cout << cnt;
}
