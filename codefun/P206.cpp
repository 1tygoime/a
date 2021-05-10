#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,count(0);
    cin >> k;
    for (int i = 0; i <= k; i++){
        for (int j = 0; j <= k/2; j ++){
            for (int m = 0; m <= k/5; m ++)
                if (i + 2*j + 5*m == k) count++;
        }
    }
    cout << count;
    return 0;
}