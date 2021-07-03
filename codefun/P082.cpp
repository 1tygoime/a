#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long a,b,c,result(1);
    cin >> a >> b >> c;
    for (unsigned long long i = a; i <= b; i++)
        result = result%c * i%c;
    cout << result;
    return 0;
}
