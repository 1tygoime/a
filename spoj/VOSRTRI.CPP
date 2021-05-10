#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pb push_back
 
vector < pair <int, int> > v;
vector <int> dx(100005), dy(100005);
ll res;
 
// Neu dinh a[i] la dinh cua tam giac vuong
// thi so tam giac vuong tao thanh la so diem thuoc duong thang x=a[i].x * so diem thuoc duong thang y=a[i].y
// va khac a[i].x,a[i].y
 
int main(){
    int n;
    cin >> n;
    v.resize(n);
    for(auto &c: v){
        cin >> c.first >> c.second;
        dx[c.first]++;
        dy[c.second]++;
    }
    for(auto &c: v){
        res += 1LL * (dx[c.first] - 1) * (dy[c.second] - 1);
    }
    cout << res;
    return 0;
}