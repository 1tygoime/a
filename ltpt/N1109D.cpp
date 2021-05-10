#include <bits/stdc++.h>
using namespace std;

int n;
char a[50];

void Xuat(){
    for (int i = 0; i < 2*n; i ++)
        cout << a[i];
    cout << '\n';
}

void Try(int i, int mo, int dong){
    if (i == 2*n)
        Xuat();
    else{
        if (mo < n){
            a[i] = '(';
            Try(i+1,mo+1,dong);
        }
        if (dong < mo){
            a[i] = ')';
            Try(i+1,mo,dong+1);
        }
    }
}

int main(){
    cin >> n;
    Try(0,0,0);
    return 0;
}
