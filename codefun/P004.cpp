#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, dem(0);
    cin >> N;
    for (int i = N - 1; i > (N - 1) / 2; i--)
        dem++;
    cout << dem;
    return 0;
}