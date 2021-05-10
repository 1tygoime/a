/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pii pair <int,int>
const int nmax = 700000;
bool isP[nmax + 5];
vector <int> prime;
string np = "";
int x,k;

vector <char> del(string M, int n){
    vector <char> v = {'a'};
    for(unsigned int i = 0; i < M.size(); i++){ // unsigned int for not warning, because M.size() is size_t type
        while (v.back() < M[i] && n > 0){
            v.pop_back();
            n--;
        }
        v.push_back(M[i]);
    }
    while (n > 0 && !v.empty()){
        v.pop_back();
        n--;
    }
    return v;
}

void sieve(){
    for(int i = 2; i <= nmax; i++)
        isP[i] = 1;
    for(int i = 2; i * i <= nmax; i++){
        if(isP[i]){
            for (int j = i * i; j <= nmax; j+= i)
                isP[j] = 0;
        }
    }
    for(int i = 2; i <= nmax; i++)
        if (isP[i]) prime.push_back(i);
}

string int2str(int n){
    string res = "";
    for (; n; res += (n % 10) + '0', n /= 10){}
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    sieve();
    cin >> x >> k;
    for (unsigned int i = 0; i < x; i++)
        np += int2str(prime[i]);
    vector <char> res = del(np, k);
    for (auto it = res.begin() + 1; it != res.end(); it++)
        cout << *it;
    return 0;
}
