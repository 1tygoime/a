#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

const int d[] = {1, 6, 8, 4, 2};

void SOL(){
    int n;
    cin >> n;
    cout << d[n % 4 + bool(n)];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    SOL();

    return 0;
}
