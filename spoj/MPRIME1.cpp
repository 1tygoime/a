/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int nmax = 12000;
bool prime[nmax];
int cnt;
void sieve(){
    for (int i = 2; i <= nmax; i++)
        prime[i] = 1;
    for (int i = 2; i * i <= nmax; i++){
        if (prime[i]){
            for (int j = i * i; j <= nmax; j+=i)
                prime[j] = 0;
        }
    }
}

int main(){
    fast
    sieve();
    vector <int> nprime;
    for(int i = 2; i <= nmax; i++) if (prime[i]) nprime.push_back(i);
    int n;
    while (cin >> n){
        if (n==0) return 0;
        int s(0),bd(0), j(0);
        /* Thuat O(nprime.size()^2) ko toi uu
        for(int i = 0; i < nprime.size(); i++){
            int s(0);
            for(int j = i; j < nprime.size(); j++){
                s += nprime[j];
                if (s == n)
                    bd++;
            }
        }
        cout << bd << '\n';
        */
        for(int i = 0; i < nprime.size(); i++){
            s += nprime[i];
            for (; s > n; s-= nprime[j], j++){}
            if (s == n)
                bd++;
        }
        cout << bd << '\n';
    }
    return 0;
}
