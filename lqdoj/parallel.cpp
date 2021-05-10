#include <bits/stdc++.h>
using namespace std;

int a[15];

map <int, int> cc;
int cnt;

void done_contest(){
  for(int i = 1; i <= 12; i++) cc[a[i]]++;
  for(auto &it: cc){
    if(it.second % 4) {cout << "no\n"; return; }
  }
  cout << "yes\n";
}

int main(){
  while(cin >> a[1]){
    if(!a[1]) return 0;
    for(int i = 2; i <= 12; i++) cin >> a[i];
    cc.clear();
    done_contest();
  }
}
