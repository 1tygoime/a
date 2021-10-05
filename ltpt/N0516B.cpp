#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main()
{
    int n, k(1);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << k + ((i + j) % 2 ? -1 : 1) << ' ';
            k++;
        }
        cout << endl;
    }
    return 0;
}
