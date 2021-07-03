#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e6;
vector <int> phi(nmax + 1);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i <= nmax; i++)
        phi[i] = i;

    for(int i = 2; i <= nmax; i++){
        if (phi[i] == i){
            for(int j = i; j <= nmax; j += i)
                phi[j] -= phi[j] / i;
        }
    }

    int T;
    for(cin >> T; T--;){

        int n;
        cin >> n;
        cout << phi[n] << '\n';

    }

    return 0;
}
