#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <int> v;

int main(){
    int n, res = 0;
    cin >> n;
    v.resize(n);
    for(int &i : v){
        cin >> i;
        res += i;
    }
    sort(v.begin(), v.end());
    for(int i = 0, j = n - 1; i < j; i++, j--)
        res += v[j] - v[i];
    cout<<res;
    return 0;
}
