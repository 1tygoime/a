#include <bits/stdc++.h>
using namespace std;

void hoanDoiSo(long long &a, long long &b) {
    long long tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    // nhap mang 2 chieu
    long long m,n;
    cin >> m >> n;
    long long A_2D[m][n];
    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            cin >> A_2D[i][j];
        }
    }

    // chuyen mang 2 chieu thanh 1 chieu
    long long A_1D[m * n];
    long long A_1D_Index = 0;

    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            A_1D[A_1D_Index] = A_2D[i][j];
            A_1D_Index++;
        }
    }

    // sap xep mang 1 chieu
    for (long long i = 0; i < m * n; i++) {
        for (long long j = i; j < m *n; j++) {
            if (A_1D[i] > A_1D[j]) {
                hoanDoiSo(A_1D[i], A_1D[j]);
            }
        }
    }

    // mang 1 chieu => 2 chieu
    long long B_2D[m][n] = { 0 };
    long long B_Index = 0;
    long long B_Row_Index = 0;
    long long B_Col_Index = 0;
    long long Row = m;
    long long Col = n;

    while (B_Row_Index < Row && B_Col_Index < Col) {

        for (long long i = B_Col_Index; i < Col; i++)
        {
            B_2D[B_Row_Index][i] = A_1D[B_Index];
            B_Index++;
        }

        B_Row_Index++;

        for (long long i = B_Row_Index; i < Row; i++)
        {
            B_2D[i][Col - 1] = A_1D[B_Index];
            B_Index++;
        }

        Col--;

        if (B_Row_Index < Row)
        {
            for (long long i = Col - 1; i >= B_Col_Index; i--)
            {
                B_2D[Row - 1][i] = A_1D[B_Index];
                B_Index++;
            }
            Row--;
        }

        if (B_Col_Index < Col)
        {
            for (long long i = Row - 1; i >= B_Row_Index; i--)
            {
                B_2D[i][B_Col_Index] = A_1D[B_Index];
                B_Index++;
            }
            B_Col_Index++;
        }

    }

    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            cout << B_2D[i][j] << " ";
        }
        cout << endl;
    }

}
