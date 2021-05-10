#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

long long TongCot(long long a[][MAX], long long dong, long long cot){
    long long s(0);
    for (long long i = 0; i < dong; i++){
        s += a[i][cot];
    }
    return s;
}

int main(){
    long long dong,cot,a[MAX][MAX],cotMAX,tongMAX;
    cin >> dong >> cot;
    for (long long i = 0; i < dong; i++){
        for (long long j = 0; j < cot; j++)
            cin >> a[i][j];
    }
    tongMAX = TongCot(a,dong,0);
    for (long long i = 1; i < cot; i++){
        if (tongMAX < TongCot(a,dong,i)) tongMAX = TongCot(a,dong,i);
    }
    for (long long i = 0; i < cot; i++){
        if (tongMAX == TongCot(a,dong,i)){
            cotMAX = i;
            break;
        }
    }
    cout << tongMAX << ' ' << cotMAX+1;
    return 0;
}
