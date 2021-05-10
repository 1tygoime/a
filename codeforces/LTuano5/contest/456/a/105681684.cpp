#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main(){
    int n;
    cin >> n;
    vector <pair <int,int> > v(n);
    for(auto &i : v) cin >> i.first >> i.second;
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++){
        if (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}
