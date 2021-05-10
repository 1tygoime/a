#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int m, n, S[35][35], cnt;

void Prod(){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, S[i][j]);
            cout << setw(3) <<  S[i][j];
        }
        cout << '\n';
    }
    cout << '\n';
}

void Try(int i, int j){
    if (i > m){
        Prod();
        return;
    }
    if (j > n){
        Try(i + 1, 1);
        return;
    }
    if (!S[i][j]){
        if (!S[i][j + 1] && j < n){
            S[i][j] = S[i][j + 1] = ++cnt;
            Try(i, j + 2);
            cnt--;
            S[i][j] = S[i][j + 1] = 0;
        }
        if (!S[i + 1][j] && i < m){
            S[i][j] = S[i + 1][j] = ++cnt;
            Try(i, j + 1);
            cnt--;
            S[i][j] = S[i + 1][j] = 0;
        }
    } else{
        if (j < n) Try(i, j + 1);
        else Try(i + 1, 1);
    }
}

int main(){
    cin >> m >> n;
    if ((m * n) % 2) return 0;
    Try(1, 1);
    return 0;
}
