#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, c = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n - 2; i++){
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') c++;
    }

    cout << c;

    return 0;
}
