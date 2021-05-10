#include <bits/stdc++.h>
using namespace std;

int a[100],n,k,cnt(0),x[100];

void init(){
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
}

void Xuat(){
    for (int i = 1; i <= k; i++)
        cout << a[x[i]] << ' ';
    cnt++;
    cout << '\n';
}

void Try(int i){
    for (int j = x[i-1]+1; j <= n-k+i; j++){
        x[i] = j;
        if (i == k){
            Xuat();
        }
        else
            Try(i+1);
    }
}


int main(){
    cin >>  k >> n;
    init();
    Try(1);
    cout<<cnt;
    return 0;
}
