#include <bits/stdc++.h>
using namespace std;
int main(){
    string dmm[22500];
    long long n,m;
    cin >> n >> m;
    for (int j = 1; j <= n; j++){
        long long i;
        cin >> i >> dmm[i];
    }
    for (int k = 1; k <= m; k++){
        long long ID;
        cin >> ID;
        if (dmm[ID] == "\0") cout << "Not found \n";
        else cout << dmm[ID] << '\n';
    }
    return 0;
}
