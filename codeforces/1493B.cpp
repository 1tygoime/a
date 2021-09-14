#include<bits/stdc++.h>
using namespace std;

const int conv[] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

int h, m;
string s;

void add(int &curr_h, int &curr_m){
  ++curr_m;

  if(curr_m == m)
    ++curr_h,
    curr_m = 0;

  if(curr_h == h) curr_h = 0;
}

int get(int t){
  int d1 = t / 10, d2 = t % 10;

  if(conv[d1] == -1 || conv[d2] == -1)
    return 1000000000;

  return conv[d2] * 10 + conv[d1];
}

void solve(){
  cin >> h >> m >> s;

  int curr_h = (s[0] - '0') * 10 + s[1] - '0';
  int curr_m = (s[3] - '0') * 10 + s[4] - '0';


//  cout<<(get(curr_m) < h && get(curr_h) < m)

  for(; ; add(curr_h, curr_m)){
//    cout << curr_h << ' ' << curr_m << ' ' << get(curr_h) << ' ' << get(curr_m) << endl;

    if(get(curr_m) < h && get(curr_h) < m){
      cout << setw(2) << setfill('0') << curr_h;
      cout << ':';
      cout << setw(2) << setfill('0') << curr_m;
      cout << '\n';
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
