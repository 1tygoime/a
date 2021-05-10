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

    priority_queue <int, vector <int>, greater <int> > pqs;
    priority_queue <int> pq;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        pqs.push(x);
        pq.push(x);
    }

    for(int i = 0; i < n; i++){
        cout << pqs.top() << ' ';
        pqs.pop();
    }

    cout << '\n';

    for(int i = 0; i < n; i++){
        cout << pq.top() << ' ';
        pq.pop();
    }

    return 0;
}

