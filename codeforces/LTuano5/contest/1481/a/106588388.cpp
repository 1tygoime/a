#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

string s;

void SOL(){
    int px, py, a = 0, b = 0, c = 0, d = 0;
    string s;
    cin >> px >> py >> s;
    for(const char &ch : s){
        if (ch == 'R') a++;
        else if(ch == 'L') b--;
        else if(ch == 'U') c++;
        else d--;
    }
    if (px > 0){
        if (py > 0){
            cout << (a >= px && c >= py ? "YES\n" : "NO\n");
        } else cout << (a >= px && d <= py ? "YES\n":"NO\n");
    } else{
        if(py > 0)
            cout << (b <= px && c >= py ? "YES\n":"NO\n");
        else cout << (b <= px && d <= py ? "YES\n":"NO\n");
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--; ) SOL();

    return 0;
}
