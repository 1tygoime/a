#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,max,a[100005], location;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    max = a[1];
    for (long long i = 1; i <= n; i++){
        if (max < a[i]) max = a[i];
    }
    for (long long i = 1; i <= n; i++){
        if (max == a[i]){
                location = i;
                break;
        }
    }
    cout << max << ' ' << location;
    return 0;
}
