#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, a, b;
    cin >> n >> a >> b;
    cout << n - max(a + 1, n - b) + 1;
    return 0;
}
