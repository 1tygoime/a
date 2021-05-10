#include <bits/stdc++.h>
using namespace std;

long long zero(long long n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}
int main(){
    long long n;
    cin >> n;
    cout << zero(n);
    return 0;
}
