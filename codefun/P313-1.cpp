#include <bits/stdc++.h>
using namespace std;

int n;

int bin(char last, int len){
    if (len == n) return 1;
    if (last == '0') return bin('1', len + 1);
    else return bin('0', len + 1) + bin('1', len + 1);
}

int main()
{
    cin >> n;
    cout << bin('0', 1) + bin('1', 1);
    return 0;
}
