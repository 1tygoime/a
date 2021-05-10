#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    long double divide = (a*b)*(a/(double)b);
    long double result = ((a+b)*(a-b))/divide;
    cout << setprecision(2) << fixed << result;
    return 0;
}