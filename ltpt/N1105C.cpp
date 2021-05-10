#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x[30],k;
bool d[30];

void init(){
    for (int i = 0; i < 30; i++)
        d[i] = true;
}

void Xuat(){
    for (int a = 1; a <= k; a++)
        cout << x[a] << ' ';
    cout << '\n';
}
void Try(ll i){
    for (int j = 1; j <= n; j++){
        if(d[j]==true){
            x[i]=j;
            d[j]=false;
            if (i == k)
                Xuat();
            else
                Try(i+1);
            d[j]=true;
        }
    }
}
int main()
{
    cin >> k >> n;
    init();
    Try(1);
}

