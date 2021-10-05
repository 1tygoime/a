// Mat ma trong Gravity Falls: https://bit.ly/3blYUZE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // Str[x] trong C++ tinh tu i = 0, trong khi bang chi tinh tu i = 1...26, vi the ta phai them 1 dau cach o dau;
    // 27 = ' ' ( Theo de ra ) vi the them space o cuoi
    string str = " abcdefghijklmnopqrstuvwxyz ";
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << str[x];
    }
    return 0;
}
