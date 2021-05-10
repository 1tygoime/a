#include <bits/stdc++.h>
using namespace std;
#define MAX 50

bool minDong(int a[][MAX], int vtdong, int vtcot, int dong, int cot){
    int x = a[vtdong][vtcot];
    for (int i = 0; i < cot; i++)
        if(a[vtdong][i] < x) return false;
    return true;
}

bool maxCot(int a[][MAX], int vtdong, int vtcot, int dong, int cot){
    int x = a[vtdong][vtcot];
    for (int j = 0; j < dong; j++)
        if(a[j][vtcot] > x) return false;
    return true;
}

int YenNgua(int a[][MAX], int dong, int cot){
    int dem(0);
    for (int i = 0; i < dong ; i++){
        for (int j = 0 ; j < cot ; j++)
            if (minDong(a,i,j,dong,cot) && maxCot(a,i,j,dong,cot)) dem++;
    }
    return dem;
}

int main(){
    int n,m,a[MAX][MAX];
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j <m ; j++) cin >> a[i][j];
    }
    int d = YenNgua(a,n,m);
    cout << d;
    return 0;
}
