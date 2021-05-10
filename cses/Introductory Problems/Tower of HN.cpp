#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <pair <int, int> > v;

void Move (int n, int x, int y){
    if (n == 1)
        v.pb({x, y});
    else{
        Move(n-1,x,6-x-y);
        Move(1,x,y);
        Move(n-1,6-x-y,y);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    Move(n, 1, 3);

    cout << v.size() << '\n';
    for(const auto &i : v)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}
