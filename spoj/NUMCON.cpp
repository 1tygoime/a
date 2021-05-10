/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pii pair <int,int>

bool cmp(string a, string b){
    return a + b > b + a;
//    string s = (a.size()>b.size()?b:a);
//    for(int i = 0; i < s.size(); i++)
//        if (a[i] != b[i])
//            return a[i] > b[i];
//    return 0;
}
vector <string> str;
int main(){
    string s;
    while (cin >> s)
        str.push_back(s);
    sort(str.begin(),str.end(),cmp);
    for(auto &st : str)
        cout << st;
    return 0;
}
