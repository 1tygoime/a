#include <bits/stdc++.h>
using namespace std;

int n, x[25], c[25][25], cmin = INT_MAX, cost, min_cost = INT_MAX;
bool visited[25];

void Try(int i){
    if (cost + cmin * (n - i + 1) >= min_cost) return;
    for(int j = 1; j <= n; j++){
        if (!visited[j] && c[x[i - 1]][j]){
            visited[j] = 1;
            x[i] = j;
            cost += c[x[i - 1]][j];
            if (i == n)
                min_cost = min(min_cost, cost);
            else Try(i + 1);
            visited[j] = 0;
            cost -= c[x[i - 1]][j];
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> c[i][j];
            if(c[i][j]) cmin = min(cmin, c[i][j]);
        }
    }
    for(int i = 1; i <= n; i++){
        memset(x, 0, sizeof(x));
        memset(visited, 0, sizeof(visited));
        cost = 0,
        x[1] = i,
//        visited[i - 1] = 0,
        visited[i] = 1;
        Try(2);
    }
    cout << min_cost;
    return 0;
}
