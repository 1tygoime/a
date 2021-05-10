/*
Ban đầu, giao tất cả các công việc cho B làm. Ta có:

res = tổng các bi từ 1=>2n

Sau đó, tạo mảng c : ci=ai-bi, nghĩa là nếu chọn A làm việc i thay B thì time
tăng ci (ci có thể âm). Sort c tăng dần, cộng thêm n phần tử.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> diff;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

//  freopen("GIFT.INP", "r", stdin);
//  freopen("GIFT.OUT", "w", stdout);

  int n;
  ll sumHuy = 0;
  cin >> n; n *= 2;

  for(int i = 0; i < n; i++){
    ll huy, hoang;
    cin >> huy >> hoang;
    diff.push_back(huy - hoang);
    sumHuy += huy;
  }

  sort(diff.begin(), diff.end());

  for(int i = n/2; i < n; i++) sumHuy -= diff[i];

  cout << sumHuy;
}

