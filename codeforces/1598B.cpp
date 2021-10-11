#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

bool a[N][N];

void orz_HuuDuc(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= 5; j++){
      cin >> a[i][j];
    }

  bool f = false;
//  for(int i = 1; i <= n; i++)
//    for(int j = 1; j <= 5; j++)
//      cout << a[i][j] << " \n"[j == 5];

  for(int day1 = 1; day1 <= 5; day1++)
    for(int day2 = day1 + 1; day2 <= 5; day2++){
      vector<int> d1, d2, inter;

      for(int i = 1; i <= n; i++){
        if(a[i][day1] == true && a[i][day2] == true)
          inter.push_back(i);
        else if(a[i][day1] == true)
          d1.push_back(i);
        else if(a[i][day2] == true)
          d2.push_back(i);
      }

      if(d1.size() == 0 && d2.size() == 0 && inter.size() == 0)
        continue;

      //if(inter % 2) continue;
      int ok1 = d1.size(), ok2 = d2.size(), ok3 = inter.size();

//      cout << ok1 << " " << ok2 << endl;

      //assign that ok1 < ok2
      if(ok1 > ok2)
        swap(ok1, ok2);

      if(ok3 < ok2 - ok1)
        continue;

      ok3 -= ok2 - ok1;
      ok1 = ok2;

      if(ok3 % 2) continue;

      ok1 += ok3 / 2;
      ok2 += ok3 / 2;

//      cout << "Day 1 = " << day1 << endl << "Day 2= " << day2 << endl << "ok1 " << ok1 << endl <<"ok2" << ok2 << endl;

      if(ok1 == ok2 && ok1 == n / 2){
        f = true;
//        cout << "YES\n";
//        return;
      }
    }

  cout << (f ? "YES\n" : "NO\n");
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
