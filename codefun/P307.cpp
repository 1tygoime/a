#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long mt[1000][1000];
    long long Hang,Cot,tong(0);
    cin >> Hang >> Cot;
    for (long long i = 0; i < Hang; i++){
        for (long long j = 0; j < Cot; j++)
            cin >> mt[i][j];
    }
    for (long long i = 0; i < Hang; i++){
        for (long long j = 0; j < Cot; j++)
            if ((i + j) % 2 == 0) tong += mt[i][j];
    }
    cout << tong;
}