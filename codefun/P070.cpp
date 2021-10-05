#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, temp, count(1);
    cin >> a >> b;
    long double result = (double)a / b;
    temp = a % b;
    while (count <= 70)
    {
        result = (temp * 10) / b;
        temp = (temp * 10) % b;
        count++;
    }
    cout << result;
    return 0;
}
