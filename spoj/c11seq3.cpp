#include<bits/stdc++.h>
using namespace std;

int f[35], mp[1200000];

void srt(int &x){
  string s = to_string(x);
  sort(s.begin(), s.end());
  x = stoi(s);
}

int main(){
  int start = -1, len = -1;

  f[1] = 1, mp[1] = 1;
  for(int i = 2; i < 35; i++){
    f[i] = f[i - 1] * 2;
    srt(f[i]);

    if(mp[f[i]]){
      start = mp[f[i]];
      len = i - mp[f[i]];
    }

    mp[f[i]] = i;
  }

//  cout << len << endl;
//  return 0;

  int n;
  cin >> n;
  cout << (n <= start ? f[n]
                      : f[start + (n - start) % len]);
}
