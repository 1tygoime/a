#include <bits/stdc++.h>
using namespace std;

string s, token, s1;

int main(){
  getline(cin, s);

  for(int i = 0; i < (int)s.size() - 1; i++)
    if (s[i] == ' '&&s[i + 1] != ' ')
        if (s[i + 1] < '0' || s[i + 1] >'9' && s[i + 1] < 'A' || s[i + 1] > 'Z' && s[i + 1] < 'a' || s[i + 1] > 'z')  {
            cout << "ERROR";
            return 0;
        }

  stringstream ss(s);
  while(ss >> token) s1 += token, s1.push_back(' ');
  s = s1;

  s[0] = toupper(s[0]);
  for(int i = 0; i < (int)s.size(); i++){
    if(s[i] == '.')
      if(s[i + 1] == ' ') s[i + 2] = toupper(s[i + 2]);
      else s[i + 1] = toupper(s[i + 1]);
  }

  cout << s;
}
