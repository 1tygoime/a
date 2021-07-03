#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5],cnt2(0),cnt3(0),b[1005];
    for (int i = 1; i <= 5; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= 1005; i++) b[i] = 0;
    for (int i = 1; i <= 5; i++){
        b[a[i]]++;
    }
    for (int i = 1; i <= 1005; i++){
        if (b[i] == 2) cnt2++;
    }
    if (cnt2 == 2) cout << "YES";
    else cout << "NO";
    return 0;
}
