#include <bits/stdc++.h>
using namespace std;

int n;
vector <pair<pair<int, int>, int>> v;
int last[200001]; //current room of i-th contest

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 1; i <= n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back({{x, 1}, i}); //in
    v.push_back({{y + 1, -1}, i});//out
  }

  sort(v.begin(), v.end());

  stack <int> room; //free room till v[i]
  int curr = 0, res = 0;
  for(const auto &i: v){
    if(i.first.second == 1){
      curr++;
      //dont have free room
      if(room.empty())
        last[i.second] = curr;

      else
        last[i.second] = room.top(),
        room.pop();
    }

    //close contest
    else{
      curr--;
      room.push(last[i.second]);
    }

    res = max(res, curr);
  }

  cout << res << '\n';
  for(int i = 1; i <= n; i++){
    cout << last[i] << ' ';
  }

  return 0;
}
