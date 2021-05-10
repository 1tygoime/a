#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100005],n,check(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i < n; i++)
    {
        if (a[i+1] < a[i]){
            check = 1;
            break;
        }
    }
    if (check == 0) cout << "YES";
    else cout << "NO";
    return 0;
}