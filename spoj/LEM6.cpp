#include<bits/stdc++.h>
using namespace std;

const int base = 1e9,
          digits = 9;

#define bigNum vector<long long>

bigNum str2int(string s){
  bigNum res;

  while(s.size() % digits) s = '0' + s;

  for(int i = (int)s.size() - 1; i >= digits - 1; i -= digits){
    long long X = 0;

    for(int j = i - digits + 1; j <= i; j++)
      X = X * 10 + (s[j] - '0');

    res.push_back(X);
  }
  return res;
}

void display(const bigNum &X){
  cout << (X.empty() ? 0 : X.back());

  for(int i = (int)X.size() - 2; i >= 0; i--)
    cout << setw(digits) << setfill('0') << X[i];

  cout << '\n';
}

void fix(bigNum &X){
  while(X.size() > 1 && X.back() == 0) X.pop_back();
}

bool operator < (bigNum a, bigNum b){
  if(a.size() != b.size()) return a.size() < b.size();

  for(int i = (int)a.size() - 1; i >= 0; i--)
    if(a[i] != b[i]) return a[i] < b[i];

  return 0;
}

bigNum operator +(bigNum a, bigNum b){
  int carry = 0;

  a.resize(max(a.size(), b.size()));
  b.resize(max(a.size(), b.size()));

  for(int i = 0; i < (int)a.size(); i++)
    a[i] += b[i] + carry,
    carry = a[i] >= base,
    a[i] %= base;

  if(carry) a.push_back(carry);
  fix(a);

  return a;
}

const int N = 1005;



int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  return 0;
}
