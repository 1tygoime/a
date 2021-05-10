#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res = 0;
    string a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < a.size(); i++){
        res += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << res;
    return 0;
}
