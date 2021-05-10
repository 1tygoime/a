#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,min,a[100005], location(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    min = a[1];
    for (long long i = 1; i <= n; i++){
        if (min > a[i]) min = a[i];
    }
    for (long long i = 1; i <= n; i++){
        if (min == a[i]) location++;
    }
    cout << min << ' ' << location;
    return 0;
}