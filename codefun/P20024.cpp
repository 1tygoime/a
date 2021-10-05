#include <bits/stdc++.h>
using namespace std;

int count_char(const string &s)
{
  int cnt = 0;
  for (const char &c : s)
    cnt += (c != ' ');
  return cnt;
}

int d[1000], d1[1000];

int main()
{
  string s1, s2;
  while (getline(cin, s1) && getline(cin, s2))
  {
    memset(d, 0, sizeof(d));
    memset(d1, 0, sizeof(d1));
    int t = count_char(s2), cnt = 0;
    for (const char &c : s1)
      if (c != ' ')
        d[c]++;
    for (const char &c : s2)
      if (c != ' ')
        d1[c]++;
    bool chk = 1;
    for (const char &c : s2)
      if (d1[c] > d[c])
      {
        chk = 0;
        break;
      }
    cout << (chk ? "YES\n" : "NO\n");
  }
  return 0;
}
