#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long mt[1000][1000],Hang,Cot,location(0),max;
    cin >> Hang >> Cot;
    for (long long i = 0; i < Hang; i++){
        for (long long j = 0; j < Cot; j++)
            cin >> mt[i][j];
    }
    max = mt[1][1];
    for (long long i = 0; i < Hang; i++){
        for (long long j = 0; j < Cot; j++)
            if (mt[i][j] > max) max = mt[i][j];
    }
    for (long long i = 0; i < Hang; i++){
        for (long long j = 0; j < Cot; j++)
            if (mt[i][j] == max) location++;
    }
    cout << location;
    return 0;
}