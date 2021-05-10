#include <bits/stdc++.h>
using namespace std;

int a[10][10];

bool check(int val, int x, int y){
    //hang + cot
    for(int i = 0; i < 9; i++){
        if (a[i][y] == val || a[x][i] == val)
            return 0;
    }

    // box 3x3
    int X = x / 3, Y = y / 3;
    for(int i = 3 * X; i < 3 * X + 3; i++){
        for(int j = 3 * Y; j < 3 * Y + 3; j++)
            if (a[i][j] == val)
                return 0;
    }

    return 1;
}

void Try(int i, int j){

    if (i > 8){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++)
                cout << a[i][j] << ' ';
            cout << '\n';
        }
        exit(0);
    }

    if(j > 8){
        Try(i + 1, 0);
        return;
    }

    if (!a[i][j]){
        for(int k = 1; k <= 9; k++)
            if(check(k, i, j)){
                a[i][j] = k;
                Try(i, j + 1);
                a[i][j] = 0;
            }
    }
    else{
        if (j <= 8) Try(i, j + 1);
        else Try(i + 1, 0);
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++)
            cin >> a[i][j];
    }

    Try(0, 0);

    cout << -1;

    return 0;
}
