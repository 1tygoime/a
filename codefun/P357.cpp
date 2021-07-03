#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a1,b1,a2,b2,x,y;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a2 - a1 == 0){
        cout << "0.000000 0.000000";
    }
    else{
        x = (b1-b2)/(a2-a1);
        y = a1*x+b1;
        cout << setprecision(6) << fixed <<  x << ' ' << y;
    }
    return 0;
}
