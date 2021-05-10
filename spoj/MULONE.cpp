#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()
//#define OPENFILE
#define filename "MULONE"

void sol(){
    int n;
    cin >> n;

    if (n <= 9){
        for(int i = 1; i <= n; i++)
            cout << i;
        for(int i = n - 1; i > 0; i--){
            cout << i;
        }
    }
    else{
        int tmp = (n - 1) / 9, tmp1 = n - 9 * tmp;
        for(int i = 1; i <= tmp; i++)
            cout << "123456790";
        for(int i = 1; i < tmp1; i++)
            cout << i;
        for(int i = tmp1; i > 1; i--){
            cout << i;
        }
        for(int i = 1; i <= tmp; i++)
            cout << "098765432";
        cout << 1;
    }

    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifdef OPENFILE
    freopen(filename".inp", "r", stdin);
    freopen(filename".out", "w", stdout);
    #endif // OPENFILE

    int t;
    for(cin >> t; t--; )
        sol();

    return 0;
}
