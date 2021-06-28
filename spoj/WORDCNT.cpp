#include <bits/stdc++.h>
using namespace std;

string s1, s;

int main(){
    int t;
    for(cin >> t, cin.ignore(); t--; ){
        getline(cin, s1);
        stringstream ss(s1);
        int ma = 0, cnt = 0,len=0;

        while (ss >> s){
            int tmp = s.length();
            if(tmp == len)
                cnt++;
            else{
                ma = max(ma, cnt);
                cnt = 1;
                len = tmp;
            }
        }
        cout << max(ma,cnt) << '\n';
    }
    return 0;
}

