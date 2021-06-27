#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
  cin >> s;
  if (s == "Uya") cout << 2;
  else if (s == "Kag" || s == "Shi" || s == "Iya" || s == "Nge") cout << 0;
  else cout << 1;
}
