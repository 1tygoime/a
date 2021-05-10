#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[30005], b[30005], n, p, res = INT_MAX;

int main(){
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
    cin >> n >> p;
    for(int i = 2; i <= n; i++){
        int x = i;
        for(int j = 2; j * j <= x; j++){
            while (x % j == 0)
                x /= j, a[j]++;
        }
        if(x > 1) a[x]++;
    }
    int x = p;
    for(int i = 2; i * i <= x; i++){
        while (x % i == 0)
            x /= i, b[i]++;
    }
    if(x > 1) b[x]++;
    for(int i = 2; i <= 30001; i++){
        if (!b[i] || !a[i]) continue;
        res = min(res, a[i] / b[i]);
    }
    cout<<res;
    return 0;
}
