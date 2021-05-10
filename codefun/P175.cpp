#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,d,a[100005],count(0);
    cin >> n >> d;
    a[0] = 0;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++){
            if (a[i+1] - a[i] >= d) count++;
            else
                a[i+1]=a[i];
    }
    cout << count;
    return 0;
}
