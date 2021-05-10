#include <bits/stdc++.h>
using namespace std;

#define pii pair<ll, ll>
#define ll long long
#define w first
#define v second

string int2str(int x){
	string res = "";
	while(x) res = char(x % 10 + '0') + res, x /= 10;
	return " " + res;
}

int n, cnt;
ll m, res = -1;
string choose;
pii a[40];
map< ll, pair<ll, string> > mp; // mp[sum]={val,trace}
bool c;

void Try(int i, int sz, ll sum_w, ll sum_v, string tr){
  if(sum_w > m) return;
  if(i >= sz){
    if(!c){
      //tap dau
      if(mp.count(sum_w)) {if(mp[sum_w].first < sum_v) mp[sum_w] = {sum_v, tr};}
      else mp[sum_w] = {sum_v, tr};
    }
    else{
      auto it = mp.upper_bound(m - sum_w);
      if(it == mp.begin()) return;
      --it;
      if(sum_v + (*it).second.first > res)
        res = sum_v + (*it).second.first,
        choose = (*it).second.second + tr;
    }
    return;
  }
  Try(i + 1, sz, sum_w + a[i].w, sum_v + a[i].v, tr + int2str(i + 1));
  Try(i + 1, sz, sum_w, sum_v, tr);
}

int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) cin >> a[i].w >> a[i].v;
  Try(0, n / 2, 0, 0, "");
  c = 1;
  pair<ll, string> ma = {-1, ""};
  //mp thu i: chon vat thu i, tong sum, gt val
  //=>mp thu i: max val trong cac vat tu 1->i
  for(auto &it: mp){
    if(it.second.first < ma.first) it.second = ma;
    else ma = it.second;
  }
  Try(n / 2, n, 0, 0, "");
  vector<int> v;
  int xx;
  stringstream aaa(choose);
  while(aaa >> xx) v.push_back(xx);
  cout << v.size() << "\n";
  for(const int &i : v) cout << i << ' ';
  return 0;
}
