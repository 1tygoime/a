// N le => A luon thua vi A boc x vien thi B se boc n-x vien
// N chan => A boc n/2, B boc n/4..., cu chia den khi nao gap so le thi thang. (n=m*2^i,i le)

#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    while (cin >> n)
    {
        if (n % 2 == 1)
            cout << "B\n";
        else
        {
            while (n % 4 == 0)
                n /= 4;
            if (n % 2 == 1)
                cout << "B\n";
            else
                cout << "A\n";
        }
    }
    return 0;
}
