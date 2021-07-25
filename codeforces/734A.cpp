#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ){
    int n;
    cin >> n;

    int num1 = n / 3, num2 = num1;
    if(n % 3) num2++;
    if(num1 + 2 * num2 != n) swap(num1, num2);

    cout << num1 << ' ' << num2 << '\n';
  }
}
