#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void sol(){
    bool chk1 = 1, chk2 = 1;
    int n;
    cin >> n;
    if (n <= 1){
        cout << "1\n";
        return;
    }
    vector <int> a(n);
    for(int &i : a){
        cin >> i;
    }
    for(int i = 0; i < n - 1; i++){
        if(a[i] != a[i + 1]) chk2 = 0; // day bang nhau
        if(a[i] >= a[i + 1]) chk1 = 0; // day tang san
    }
    if (chk2){
        cout << n << '\n';
        return;
    }
    if (chk1){
        cout << "1\n";
        return;
    }
    cout << n / 2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    for(cin >> t; t--;)
        sol();

    return 0;
}
