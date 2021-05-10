#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Hang = n * 2 + 1;
    for (int i = 0; i < Hang; i++){
        int Sao,Space;
        if (i <= n){
            Sao = i * 2 + 1;
            Space = n-i;
        }
        else{
            Sao = (n * 2 - i)*2 + 1;
            Space = i - n;
        }
        for (int j = 0; j < Space; j++) cout << ' ';
        for (int j = 0; j < Sao; j++) cout << '*';
        cout << '\n';
    }
    return 0;
}