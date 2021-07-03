#include <bits/stdc++.h>
using namespace std;

int a[100],n,k,cnt(0),b[100],t(1),n1;

void init(){
    for (int i = k; i <= n; i++){
        b[t]=i;
        t++;
    }
}

//void Xuat(){
//    for (int i = 1; i <= k; i++)
//
//    cnt++;
//}

void Try(int i){
    for (int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if (i == k){
            cnt++;
        }
        else
            Try(i+1);
    }
}


int main(){
    cin >> k >> n;
    n1=n-k+1;
    init();
    k=1;
    n=n1;
    while (k<=n){
        Try(1);
        k++;
    }
    cout<<cnt;
    return 0;
}
