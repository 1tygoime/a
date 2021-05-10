#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> a[200005];
int main(){
    int n,last(-1),cnt(0);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
        if (a[i].second >= last){
            cnt++;
            last=a[i].first;
        }
    cout << cnt;
    return 0;
}
