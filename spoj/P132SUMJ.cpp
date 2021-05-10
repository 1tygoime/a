#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

int main(){
  string s;
  cin >> s;
  cout << (next_permutation(s.begin(), s.end()) ? s : "0");
}
