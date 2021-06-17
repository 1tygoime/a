#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

stack <pair <int, int>> a;

int main(){
  long long res = 0;
  int n;
  for(cin >> n; n--; ){
    int x;
    cin >> x;

    for(; a.size() && a.top().f < x; a.pop())
      res += a.top().s;

    if(a.empty())
      a.push({x, 1});

    else if(x == a.top().f){
      res += a.top().s + (a.size() > 1);
      a.top().s++;
    }

    else{
      res++;
      a.push({x, 1});
    }


  }

  cout << res;
}
