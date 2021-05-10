#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,min,max,tong;
    cin >> a >> b >> c;
    tong = a + b + c;

    // Sap xep a,b,c de k phai xet nhieu truong hop
    min = a; max = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (max < b) max = b;
    if (max < c) max = c;
    a = min; c = max; b = tong - min - max;

    // Dinh li cosin
    if (a*a + b*b == c*c) cout << "RIGHT";
    if (a*a + b*b > c*c) cout << "ACUTE";
    if (a*a + b*b < c*c) cout << "OBTUSE";
    return 0;
    }