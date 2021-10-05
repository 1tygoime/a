#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double AB, AC;
    cin >> AB >> AC;
    long double BC = sqrt(AB * AB + AC * AC);
    cout << setprecision(6) << fixed << BC;
    return 0;
}