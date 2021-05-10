#include <bits/stdc++.h>
using namespace std;
long long a[100005],n,mi,m;
map<long long,long long> ok;
//vector<bool> ok(1000000000,false);
//bool ok[1000000000];

void nhap(){
    cin >> n;
    for (int i = 0 ; i < n; i++){
        cin >> a[i];
        ok[a[i]]=1;
    }
}

void fmax(){
    m = a[0];
    for (int i = 1; i < n; i++)
        if (m < a[i])
            m = a[i];
}

void fmin(){
    mi = a[0];
    for (int i = 1; i < n; i++){
        if (mi > a[i])
            mi = a[i];
    }
}

void xuat(){
    for(int i = mi; i <= m; i++)
        if (ok[i] == 1)
            cout << i << ' ';
}

int main(){
    nhap();
    fmax();
    fmin();
    xuat();
    return 0;
}
