// Do tu duoi len dau neu gap a[i]=0 thi thay = 1 va thay toan bo cac ptu sau = 0


#include <bits/stdc++.h>
using namespace std;

int np[20];

void Xuat(int a[],int n){
    for (int i = 0; i < n; i++)
        cout<<a[i];
    cout << '\n';
}

void Change(int a[],int n, int lct){
    for (int i = lct; i < n; i++)
        a[i]=0;
}

void Try(int a[],int n){
    Xuat(a,n);
    int i = n-1;
    while (i > 0){
        if (a[i]==1)
            i--;
        if (a[i] == 0){
            a[i]=1;
            Change(a,n,i+1);
            Xuat(a,n);
            i=n-1;
        }
    }
}

int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << "0 \n1";
        return 0;
    }
    Try(np,n);
    return 0;
}
