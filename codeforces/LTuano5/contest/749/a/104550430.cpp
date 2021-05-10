#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()

int main(){
    int n;
    cin >> n;
    int tmp = n / 2;
    cout << tmp << '\n';
    if (n % 2){
        while(--tmp)
            cout << 2 << ' ';
        cout << 3;
    }
    else
        while(tmp--)
            cout << 2 << ' ';
    return 0;
}
