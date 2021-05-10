/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string s1,s2;
int cnt;
vector <int> gcd;

bool check(int uoc){
    // sao chep xau ra k = ma.size() / uoc lan de ktra
    string s,tmp = "";
    string ma = (s1.length() > s2.length() ? s1 : s2);
    s = ma.substr(0,uoc);
    for(int i = 1; i <= ma.size()/uoc; i++)
        tmp += s;
    // kiem tra xem co ky tu khac so voi 2 xau ko
    for(int i = 0; i < s1.size(); i++)
        if (tmp[i] != s1[i]) return 0;
    for(int i = 0; i < s2.size(); i++)
        if (tmp[i] != s2[i]) return 0;
    return 1;
}

int main(){
    fast
    cin >> s1 >> s2;
    int tmp = __gcd(s1.length(),s2.length());
    for(int i = 1; i * i <= tmp; i++){
        if(tmp % i == 0){
            if(tmp / i != i)
                gcd.push_back(tmp/i);
            gcd.push_back(i);
        }
    }
    for (auto &c: gcd) cnt += check(c);
    cout << cnt;
    return 0;
}
