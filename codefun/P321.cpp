#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100005],n,x,count(0);
    cin >> n >> x;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] == x) count++;
    }
    cout << count;
    return 0;
}