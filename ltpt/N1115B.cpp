#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x[30],d[30];
void Xuat(){
    for (int k = 1; k <= n; k++)
        cout << x[k] << ' ';
    cout << '\n';
}
ll Try(ll i){
    for (int j = 1; j <= n; j++)
    if(d[j] == 0){
        x[i] = j;
        d[j] = 1;
        if(i == n) Xuat();
        else Try(i+1);
        d[j] = 0;
    }
}
int main()
{
    cin >> n;
    Try(1);
}
