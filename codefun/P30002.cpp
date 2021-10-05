//cre: https://www.geeksforgeeks.org/count-fibonacci-numbers-given-range-log-time/

#include <bits/stdc++.h>
using namespace std;

long long fibo(long long a, long long b)
{
    long long f1 = 0, f2 = 1, f3 = 1;

    long long result = 0;

    while (f1 <= b)
    {
        if (f1 >= a)
            result++;
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return result;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << fibo(a, b);
    return 0;
}
