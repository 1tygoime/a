// XOay 90 do cung chieu dong ho
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n, a[MAX][MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << ' ';
        cout << endl;
    }
}

/*
/// Xoay 90 do nguoc chieu kim dong ho
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main(){
    int n,a[MAX][MAX];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = n-1; i >= 0; i--){
        for (int j = 0; j < n; j++)
            cout << a[j][i] << ' ';
    cout << endl;
    }
}

*/
