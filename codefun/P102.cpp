#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d,x,y,z,t,min,min1;
    cin >> a >> b >> c >> d;
    if (a < b) min = a;
    else min = b;
    if (min > c) min = c;
    if (min > d) min = d;
    if (a > min) x = a;
    else x = 1000000001;
    if (b > min) y = b;
    else y = 1000000001;
    if (c > min) z = c;
    else z = 1000000001;
    if (d > min) t = d;
    else t = 1000000001;
    if (x < y) min1 = x;
    else min1 = y;
    if (min1 > z) min1 = z;
    if (min1 > t) min1 = t;
    cout << min1;
    return 0;
}