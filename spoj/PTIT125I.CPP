#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pii pair <int,int>
// k : so chu so cua M.size()
// n : xoa ? chu so
// M : xau can xoa
int main(){
    string M; int n, k; vector <char> v = {'a'};
    cin >> k >> n >> M;
    for(unsigned int i = 0; i < M.size(); i++){
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
    for (auto it = v.begin() + 1; it != v.end(); it++)
        cout << *it;
    return 0;
}
