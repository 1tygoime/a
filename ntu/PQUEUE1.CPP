#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue <int> pq;
    int n;

    for(cin >> n; n--; ){
        int cmd;
        cin >> cmd;

        if (cmd == 1) cout << pq.size() << '\n';

        if (cmd == 2) cout << (pq.empty() ? "YES\n" : "NO\n");

        if (cmd == 3){
            int x;
            cin >> x;
            pq.push(x);
        }

        if (cmd == 4 && !pq.empty()){
            pq.pop();
        }

        if (cmd == 5){
            cout << (pq.empty() ? -1 : pq.top()) << '\n';
        }

    }

    return 0;
}

