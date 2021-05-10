#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000001;
bool p[MAX];
vector <int> pr;
int k, cnt;

int main(){
  for(int i = 2; i * i <= MAX; ++i)
    if(!p[i]) for(int j = i * i; j <= MAX; j += i) p[j] = 1;
  for(int i = 2; i <= MAX; i++) if(!p[i]) pr.push_back(i);

  cin >> k;
  for(const int &i: pr){
    if(!p[2 * i - 1]) cnt++;
    if(cnt == k) return !(cout << i << ' ' << i << ' ' << 2 * i - 1);
    if(!p[2 * i + 1]) cnt++;
    if(cnt == k) return !(cout << i << ' ' << i << ' ' << 2 * i + 1);
  }
  return 0;
}
